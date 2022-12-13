/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <ael-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:44:38 by ael-asri          #+#    #+#             */
/*   Updated: 2022/12/13 12:33:16 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_HPP
#define MAP_HPP

#include <iostream>
#include "../utils/exceptions.hpp"
#include "../utils/utils.hpp"
// #include "../utils/Iterator_traits.hpp"
#include "../utils/map_Iterators.hpp"
#include "../utils/map_utils.hpp"

namespace ft
{
	template<class Key, class T, class Compare = std::less<Key>, class Allocator = std::allocator<std::pair<const Key, T> > > class map
	{
		public:
			typedef	Key							key_type;
			typedef	T							mapped_type;
			typedef	std::pair<const Key, T>		value_type;
			typedef	size_t						size_type;
			typedef	ptrdiff_t					difference_type;
			typedef	Compare						key_compare;
			typedef	Allocator					allocator_type;
			typedef	T&							reference;
			typedef	const T&					const_reference;
			typedef	T*							pointer;
			typedef	const T*					const_pointer;
			typedef RDtree_Iterator<T>					iterator;
			typedef RDtree_Iterator<const T >			const_iterator;
			typedef RDtree_reverse_iterator<T>			reverse_iterator;
			typedef RDtree_reverse_iterator<const T>	const_reverse_iterator;

		private:
			size_type		capcity;
			size_type		len;
			T				*m;
			Allocator		_allocator;
			Compare			cmp;
			T				*r;
			T				*l;
			T				first;
			T				second;

		public:
			// >> Member functions
				//----	Constructors
					map() :  capcity(0), len(0)
					{
						std::cout << "map default constractor called" << std::endl;
					};
					explicit map( const Compare& comp, const Allocator& alloc = Allocator() ) : _allocator(alloc), capcity(0), len(0), cmp(comp)
					{
						m = alloc.allocate(len);
						// (void)comp;
						// m = comp;
						// cmp = comp;
						std::cout << "map default constractor called" << std::endl;
					};
					template< class InputIt > map( InputIt first, InputIt last, const Compare& comp = Compare(), const Allocator& alloc = Allocator() ) : _allocator(alloc), cmp(comp)
					{
						// int i=0;
						// // while (first != last)
						// for (iterator it=first; it != last; ++it)
						// {
						// 	// v[i] = val;
						// 	// std::cout << v[i] << std::endl;
						// 	i++;
						// }
						// capcity = i;
						// len = i;
						// m = _allocator.allocate(i);
						// // (void)comp;
						// // cmp = comp;
						// std::cout << "map range constractor called!" << std::endl;
						size_type i=0,count=0;
						InputIt temp1=first, temp2=last;
					
						while (temp1 != temp2)
						{
							count+=1;
							temp1++;
						}
						len = count;
						capcity = len;
						m = _allocator.allocate(capcity);
						while (first != last)
						{
							_allocator.construct(m+i, *first);
							first++;
							i++;
						}
					};
					map( const map& other ) : capcity(other.capcity), len(other.len), m(other.m)
					{
						std::cout << "map copy constractor called!" << std::endl;
					};

				//----	Destructor
					~map()
					{
						// int i=0;
						// while (m[i])
						// {
						// 	_allocator.deallocate(m[i]);
						// 	i++;
						// }
						std::cout << "map destructor called" << std::endl;
					};

				//----	operator=
					map& operator=( const map& other )
					{
						capcity = other.capcity;
						len = other.len;
						m = other.m;
						std::cout << "map assignement operator called" << std::endl;
						return *this;
					};

				//----	get_allocator
					allocator_type get_allocator() const
					{
						return _allocator;
					};

				//----	Element access
					//	at
						T& at( const Key& key )
						{
							if (key<0 || key>len)
								throw invalidIndex();
							return *(m+key);
						};
						const T& at( const Key& key ) const
						{
							if (key<0 || key>len)
								throw invalidIndex();
							return *(m+key);
						};

					//	operator[]
						T& operator[]( const Key& key )
						{
							// if (key<0 || key>len)
							// 	throw invalidIndex();
							// return m[key];
							// if (key_exists(key))
							// {
							// 	for (iterator it=begin(); it != end(); it++)
							// 		if (it.key == key)
							// 			return it.val;
							// }
							// insert(key);
							// return m[len].val;
							iterator it;
							
							it = finde(key);
							if (it != end())
								insert(ft::make_pair(key, mapped_type()));
							it = finde(k);
							return it.second;
						};

				//----	Iterators
					//	begin
						iterator begin()
						{
							// return m;
							// size_type h=5;
							// for (size_type i=0; i<h; i++)
							// {
							// 	m = m.l;
							// }
							// return iterator(m);
							return iterator(min_element(root));
						};
						const_iterator begin() const
						{
							// return m;
							// size_type h=5;
							// for (size_type i=0; i<h; i++)
							// {
							// 	m = m.l;
							// }
							// return const_iterator(m);
							return const_iterator(min_element(root));
						};

					//	end
						iterator end()
						{
							// return m+len;
							// size_type h=5;
							// for (size_type i=0; i<h; i++)
							// {
							// 	m = m.r;
							// }
							// return iterator(m);
							return iterator(nullptr);
						};
						const_iterator end() const
						{
							// return m+len;
							// size_type h=5;
							// for (size_type i=0; i<h; i++)
							// {
							// 	m = m.r;
							// }
							// return const_iterator(m);
							return const_iterator(nullptr);
						};

					//	rbegin
						reverse_iterator rbegin()
						{
							// return m;
							// size_type h=5;
							// for (size_type i=0; i<h; i++)
							// {
							// 	m = m.r;
							// }
							// return reverse_iterator(m);
							return reverse_iterator(nullptr);
						};
						const_reverse_iterator rbegin() const
						{
							// return m;
							// size_type h=5;
							// for (size_type i=0; i<h; i++)
							// {
							// 	m = m.r;
							// }
							// return const_reverse_iterator(m);
							return const_reverse_iterator(nullptr);
						};

					//	rend
						reverse_iterator rend()
						{
							// return m+len;
							// size_type h=5;
							// for (size_type i=0; i<h; i++)
							// {
							// 	m = m.l;
							// }
							// return reverse_iterator(m);
							return reverse_iterator(min_element(root));
						};
						const_reverse_iterator rend() const
						{
							// return m+len;
							// size_type h=5;
							// for (size_type i=0; i<h; i++)
							// {
							// 	m = m.l;
							// }
							// return const_reverse_iterator(m);
							return const_reverse_iterator(min_element(root));
						};

				//----	Capacity
					//	empty
						bool empty() const
						{
							if (!len)
								return true;
							return false;
						};

					//	size
						size_type size() const
						{
							return len;
						};

					//	max_size
						size_type max_size() const
						{
							// return capcity-len;
							return _allocator.max_size();
						};

				//----	Modifiers
					//	clear
						void clear()
						{
							// _allocator.deallocate(m);
							// capcity = 0;
							// len = 0;
							for (size_type i=0; i < capcity; i++)
								_allocator.destroy(m+i);
							len = 0;
						};

					//	insert
						// std::pair<iterator, bool> insert( const value_type& value )
						// {
							
						// };
						iterator insert( iterator pos, const value_type& value )
						{
							// t_node	temp = node;
							size_type	i=0;
							// while (it)
							for (iterator it = m.begin(); it != m.end(); it++)
							{
								if (it.val > m)
								{
									// go rigth
									it = it.r;
								}
								else
								{
									// go left
									it = it.l;
								}
								// break;
								i++;
							}
							_allocator(m+i, value);
						};
						// template< class InputIt >void insert( InputIt first, InputIt last )
						// {
							
						// };

					//	erase
						// iterator erase( iterator pos )
						// {
							
						// };
						// iterator erase( iterator first, iterator last )
						// {
							
						// };
						// size_type erase( const Key& key )
						// {
							
						// };

					//	swap
						void swap( map& other )
						{
							int	temp_len = len;
							T	temp_m = m;
							len = other.len;
							m = other.m;
							other.len = temp_len;
							other.m = temp_m;
						};

				//----	Lookup
					//	count
						size_type count( const Key& key ) const
						{
							int	count;
							for (size_type i=0; i<len; i++)
								if (m[i] == key)
									count+=1;
							return count;
						};

					//	find
						// iterator find( const Key& key )
						// {
							
						// };
						// const_iterator find( const Key& key ) const
						// {
							
						// };

					//	equal_range
						// std::pair<iterator,iterator> equal_range( const Key& key )
						// {
							
						// };
						// std::pair<const_iterator,const_iterator> equal_range( const Key& key ) const
						// {
							
						// };

					//	lower_bound
						// iterator lower_bound( const Key& key )
						// {
							
						// };
						// const_iterator lower_bound( const Key& key ) const
						// {
							
						// };

					//	upper_bound
						// iterator upper_bound( const Key& key )
						// {
							
						// };
						// const_iterator upper_bound( const Key& key ) const
						// {
							
						// };

				//----	Observers
					//	key_comp
						key_compare key_comp() const
						{
							return cmp;
						};

					//	value_comp
						// ft::map::value_compare value_comp() const
						// {
							
						// };

			// >> Non-member functions
				//	operator==
				//	operator!=
				//	operator<
				//	operator<=
				//	operator>
				//	operator>=
	};

	// >> Non-member functions
		//	operator==
			template< class Key, class T, class Compare, class Alloc > bool operator==( const map<Key,T,Compare,Alloc>& lhs, const map<Key,T,Compare,Alloc>& rhs )
			{
				if (lhs.size() != rhs.size())
					return false;
				return ft::equal(lhs.begin(), lhs.end(), rhs.begin());
			};

			//	operator!=
				template< class Key, class T, class Compare, class Alloc > bool operator!=( const map<Key,T,Compare,Alloc>& lhs, const map<Key,T,Compare,Alloc>& rhs )
				{
					return !(lhs == rhs);
				};

			//	operator<
				template< class Key, class T, class Compare, class Alloc > bool operator<( const map<Key,T,Compare,Alloc>& lhs, const map<Key,T,Compare,Alloc>& rhs )
				{
					return ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());
				};

			//	operator<=
				template< class Key, class T, class Compare, class Alloc > bool operator<=( const map<Key,T,Compare,Alloc>& lhs, const map<Key,T,Compare,Alloc>& rhs )
				{
					return !(rhs < lhs);
				};

			//	operator>
				template< class Key, class T, class Compare, class Alloc > bool operator>( const map<Key,T,Compare,Alloc>& lhs, const map<Key,T,Compare,Alloc>& rhs )
				{
					return rhs < lhs;
				};

			//	operator>=
				template< class Key, class T, class Compare, class Alloc > bool operator>=( const map<Key,T,Compare,Alloc>& lhs, const map<Key,T,Compare,Alloc>& rhs )
				{
					return !(lhs < rhs);
				};
};

#endif