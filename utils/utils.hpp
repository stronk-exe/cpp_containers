#include "../vector/vector.hpp"
#include "Iterators.hpp"
#include "Iterator_traits.hpp"

namespace ft
{    
    //---   lexicographical_compare
        template<class InputIt1, class InputIt2> bool lexicographical_compare(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2)
        {
            for (; (first1 != last1) && (first2 != last2); ++first1, (void) ++first2)
            {
                if (*first1 < *first2)
                    return true;
                if (*first2 < *first1)
                    return false;
            }
        
            return (first1 == last1) && (first2 != last2);
        }

    //----	enable_if
        template<bool B, class T = void> struct enable_if {};

        template<class T> struct enable_if<true, T> { typedef T type; };
    
    //----  equal
        template<class InputIt1, class InputIt2> bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2)
        {
            for (; first1 != last1; ++first1, ++first2) {
                if (!(*first1 == *first2)) {
                    return false;
                }
            }
            return true;
        }
}