/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <ael-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:50:40 by ael-asri          #+#    #+#             */
/*   Updated: 2022/11/21 16:58:55 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// constructing vectors
#include <iostream>
#include "vector.hpp"
#include <iterator>
#include "../utils/Iterators.hpp"
int main ()
{
	// constructors used in the same order as described above:
	// ft::vector<int> first;                                // empty vector of ints
	// ft::vector<int> second (4,100);                       // four ints with value 100
	// ft::vector<int> third (second.begin(),second.end());  // iterating through second
	// ft::vector<int> fourth (third);                       // a copy of third

	// std::cout << *(second.begin())+1 << std::endl;
	// std::cout << "size before " << first.size() << std::endl;
	// first.assign(4, 7);
	// typedef ft::vector<int>::const_iterator ci;
	// ci gg (first.end());
	// auto it = first.begin();
	// ft::iterator it = first.begin();
	// first.insert(it, 2);
	// const std::string extra(4, 7);
	// first.assign(extra.begin(), extra.end());
	// std::cout << "size after " << first.size() << std::endl;
	// for (ft::vector<int>::iterator it = first.begin() ; it != first.end(); ++it)
    // 	std::cout << *it << std::endl;
	// ft::vector<double> vec;
	// vec.assign(5, 8.8);
	// vec.push_back(7.3);
	// vec.push_back(7.4);
	// vec.push_back(7.7);

	// std::cout << "vec: \n";
	// for(unsigned int i = 0; i < vec.size(); i++)
	// 	std::cout << vec.at(i) << "\n";
	// ft::vector<std::string> letters;
 
    // letters.push_back("abc");
    // std::string s("def");
    // letters.push_back(std::move(s));
 
    // std::cout << "std::vector `letters` holds: \n";
    // for(unsigned int i = 0; i < letters.size(); i++)
	// 	std::cout << letters[i] << "\n";
// 	ft::vector<int> numbers;
 
//     std::cout<<"[";
// 	for(unsigned int i = 0; i < numbers.size(); i++)
// 		std::cout << numbers[i] << " ";
// 	 std::cout<<"]\n";
 
//     numbers.push_back(5);
//     numbers.push_back(3);
//     numbers.push_back(4);
 
//     std::cout<<"[";
// 	for(unsigned int i = 0; i < numbers.size(); i++)
// 		std::cout << numbers[i] << " ";
// 	 std::cout<<"]\n";
 
//     numbers.pop_back();
 
//    std::cout<<"[";
// 	for(unsigned int i = 0; i < numbers.size(); i++)
// 		std::cout << numbers[i] << " ";
// 	 std::cout<<"]\n";
 
    // std::cout << "\nMoved-from string `s` holds: " << std::quoted(s) << '\n';
	// ft::vector<int> c1(3, 100);
	// std::cout<<"[";
	// for(unsigned int i = 0; i < c1.size(); i++)
	// 	std::cout << c1[i] << " ";
	// std::cout<<"]\n";

	// ft::vector<int>::const_iterator it = c1.begin();

    // c1.insert(it, 200);
    // std::cout<<"[";
	// for(unsigned int i = 0; i < c1.size(); i++)
	// 	std::cout << c1[i] << " ";
	// std::cout<<"]\n";
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;

	// ft::vector<int> ce1(3, 100);
	// std::cout<<"[";
	// for(unsigned int i = 0; i < ce1.size(); i++)
	// 	std::cout << ce1[i] << " ";
	// std::cout<<"]\n";

	// ft::vector<int>::const_iterator ite = ce1.end();

    // ce1.insert(ite, 200);
    // std::cout<<"[";
	// for(unsigned int i = 0; i < ce1.size(); i++)
	// 	std::cout << ce1[i] << " ";
	// std::cout<<"]\n";
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// ft::vector<int> c2(3, 100);
	// std::cout<<"[";
	// for(unsigned int i = 0; i < c2.size(); i++)
	// 	std::cout << c2[i] << " ";
	// std::cout<<"]\n";

	// ft::vector<int>::const_iterator it2 = c2.begin();

    // c2.insert(it2, 2, 300);
    // std::cout<<"[";
	// for(unsigned int i = 0; i < c2.size(); i++)
	// 	std::cout << c2[i] << " ";
	// std::cout<<"]\n";
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// ft::vector<int> ce2(3, 100);
	// std::cout<<"[";
	// for(unsigned int i = 0; i < ce2.size(); i++)
	// 	std::cout << ce2[i] << " ";
	// std::cout<<"]\n";

	// ft::vector<int>::const_iterator ite2 = ce2.end();

    // ce2.insert(ite2, 2, 300);
    // std::cout<<"[";
	// for(unsigned int i = 0; i < ce2.size(); i++)
	// 	std::cout << ce2[i] << " ";
	// std::cout<<"]\n";
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// the iterator constructor can also be used to construct from arrays:
	// int myints[] = {16,2,77,29};
	// ft::vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

	// std::cout << "The contents of fifth are:";
	// for (ft::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
	// 	std::cout << ' ' << *it;
	// std::cout << '\n';
	
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// constructors used in the same order as described above:
	// ft::vector<int> first;                                // empty vector of ints
	// ft::vector<int> second (4,100);                       // four ints with value 100
	// // ft::ft_vector<int> third (second.begin(),second.end());  // iterating through second
	// // ft::ft_vector<int> fourth (third);                       // a copy of third
	// ft::vector<int> fourth (second); 
	
	// // ft::vector<int> hlwa1(3,13);
	// // ft::vector<int> hlwa2(3,37);
	// // hlwa1 = hlwa2;
	// ////
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// ft::vector<int> hlwa1 (100,0);
	// ft::vector<int> hlwa2 (8,0);
	// // std::cout << "hlwa's allocator " << hlwa1.get_allocator() << std::endl;

	// hlwa2 = hlwa1;
	// // hlwa1 = ft::vector<int>();

	// std::cout << "Size of hlwa1: " << hlwa1.size() << " Capacity of hlwa1: " << hlwa1.capacity() << '\n';
	// std::cout << "Size of hlwa2: " << hlwa2.size() << " Capacity of hlwa2: " << hlwa2.capacity() << '\n';
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	
	
	
	
	
	
	// //////
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// ft::vector<int> foo (3,100);   // three ints with a value of 100
	// ft::vector<int> bar (5,200);   // five ints with a value of 200

	// foo.swap(bar);

	// std::cout << "foo contains:";
	// for (unsigned i=0; i<foo.size(); i++)
	// 	std::cout << ' ' << foo[i];
	// std::cout << '\n';

	// std::cout << "bar contains:";
	// for (unsigned i=0; i<bar.size(); i++)
	// 	std::cout << ' ' << bar[i];
	// std::cout << '\n';
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// //////






	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// ft::vector<int> empty_hlwa;
	
	// hlwa1.clear();
	// std::cout << "hlwa is empty " << hlwa1.empty() << std::endl;
	// std::cout << "empty_hlwa is empty " << empty_hlwa.empty() << std::endl;
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// //////

	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// ft::vector<int> hlwa;
	// std::cout << "hlwas size before " << hlwa.size() << std::endl;
	// hlwa.push_back(1);
	// hlwa.push_back(3);
	// hlwa.push_back(3);
	// hlwa.push_back(7);
	// hlwa.pop_back();
	// hlwa.pop_back();
	// std::cout << "hlwas size after " << hlwa.size() << std::endl;
	// hlwa.shrink_to_fit();
	// std::cout << "hlwas capacity after " << hlwa.capacity() << std::endl;
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// std::cout << "resizing some" << std::endl;
	// ft::vector<int> myvector;
	// for (int i=1;i<10;i++) myvector.push_back(i);
	// myvector.resize(5);
	// myvector.resize(8,100);
	// myvector.resize(12);
	// std::cout << "myvector contains:";
	// for (size_t i=0;i<myvector.size();i++)
	// 	std::cout << ' ' << myvector[i];
	// std::cout << '\n';
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// std::cout << "^^^ at ^^^" << std::endl;
	// ft::vector<int> myvector2 (10);
	// for (unsigned i=0; i<myvector2.size(); i++)
	// 	myvector2.at(i)=i;
	// for (unsigned i=0; i<myvector2.size(); i++)
	// 	std::cout << ' ' << myvector2.at(i);
	// std::cout << '\n';
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// std::cout << "^^^ front & back ^^^" << std::endl;
	// ft::vector<int> myvector3;
	// myvector3.push_back(78);
	// myvector3.push_back(16);
	// myvector3.front() -= myvector3.back();
	// std::cout << "myvector.front() is now " << myvector3.front() << '\n';
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// std::cout << "^^^ data ^^^" << std::endl;
	// ft::vector<int> myvector4 (5);
	// int* p = myvector4.data();
	// *p = 10;
	// ++p;
	// *p = 20;
	// p[2] = 100;
	// std::cout << "myvector contains:";
	// for (unsigned i=0; i<myvector4.size(); ++i)
	// 	std::cout << ' ' << myvector4[i];
	// std::cout << '\n';
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// std::cout << "^^^ get_allocator ^^^" << std::endl;
	// ft::vector<int> myvector5;
	// int * p2;
	// unsigned int i;
	// p2 = myvector5.get_allocator().allocate(5);
	// for (i=0; i<5; i++) myvector5.get_allocator().construct(&p2[i],i);
	// std::cout << "The allocated array contains:";
	// for (i=0; i<5; i++) std::cout << ' ' << p2[i];
	// std::cout << '\n';
	// for (i=0; i<5; i++) myvector4.get_allocator().destroy(&p2[i]);
	// myvector4.get_allocator().deallocate(p2,5);
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// std::cout << "^^^ iterators ^^^" << std::endl;
	// typedef std::iterator_traits<int*> traits;
	// if (typeid(traits::iterator_category)==typeid(std::random_access_iterator_tag))
	// 	std::cout << "int* is a random-access iterator\n";
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	ft::vector<int> values;
	values.push_back(1);
	values.push_back(2);
	values.push_back(3);
	values.push_back(4);
	// std::cout <<"size-- "<<values.size()<<"--\n";
	values.push_back(5);
	std::cout << "not using iterators" << std::endl;
	for (unsigned int i=0; i<values.size(); i++)
		std::cout << values[i] << std::endl;
	// // std::cout << "Range-based for loop" << std::endl;
	// // for (unsigned int value : values)
	// // 	std::cout << value << std::endl;
	// std::cout << "using iterators" << std::endl;
	// for (ft::vector<int>::iterator it = values.begin(); it != values.end(); it++)
	// 	std::cout << *it << std::endl;
	// // std::cout << '\n';
	// // the iterator constructor can also be used to construct from arrays:
	// // int myv[] = {16,2,77,29};
	// // ft::vector<int> fifth (myv, myv + sizeof(myv) / sizeof(int) );
	// // std::cout << "The contents of fifth are:";
	// // for (ft::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
	// //   std::cout << ' ' << *it;
	// // std::cout << '\n';
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// ft::vector<int> myg;
	// for (int i=0; i<10; i++) myg.push_back(i);

	// typedef ft::vector<int>::iterator iter_type;
	// iter_type from (myg.begin());
	// iter_type until (myg.end());
	// ft::reverse_iterator<iter_type> rev_until (from);
	// ft::reverse_iterator<iter_type> rev_from (until);
	// std::cout << "myg:";
	// while (rev_from != rev_until)
	// 	std::cout << ' ' << *rev_from++;
	// std::cout << '\n';
	// std::cout << "^^^^^^^^^^^^^^" << std::endl;
	// ft::vector<int> alice(1, 2);
    // ft::vector<int> bob(7, 10);
    // ft::vector<int> eve(1, 3);

    // std::cout << std::boolalpha;

    // // Compare non equal containers
    // std::cout << "alice == bob returns " << (alice == bob) << '\n';
    // std::cout << "alice != bob returns " << (alice != bob) << '\n';
    // std::cout << "alice <  bob returns " << (alice < bob) << '\n';
    // std::cout << "alice <= bob returns " << (alice <= bob) << '\n';
    // std::cout << "alice >  bob returns " << (alice > bob) << '\n';
    // std::cout << "alice >= bob returns " << (alice >= bob) << '\n';

    // std::cout << '\n';

    // // Compare equal containers
    // std::cout << "alice == eve returns " << (alice == eve) << '\n';
    // std::cout << "alice != eve returns " << (alice != eve) << '\n';
    // std::cout << "alice <  eve returns " << (alice < eve) << '\n';
    // std::cout << "alice <= eve returns " << (alice <= eve) << '\n';
    // std::cout << "alice >  eve returns " << (alice > eve) << '\n';
    // std::cout << "alice >= eve returns " << (alice >= eve) << '\n';



	// ft::vector<std::string> characters;
	// characters.push_back("stronk");
	// characters.push_back('s');
	// characters.push_back('s');
 
    

    // characters.assign(2, "stronkest");
	// const std::string gg(2, 'l');
	// characters.assign(gg.begin(), gg.end());
    // for (ft::vector<std::string>::iterator it = characters.begin() ; it != characters.end(); ++it)
    // 	std::cout << *it << std::endl;

    // const std::string extra(6, 'b');
    // characters.assign(extra.begin(), extra.end());
    // print_vector();
 
    // characters.assign({'C', '+', '+', '1', '1'});
    // print_vector();
	return 0;
}