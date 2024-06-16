#ifndef __MAKEPAIR__
#define __MAKEPAIR__

#include <iostream>

template<typename T1, typename T2>
std::pair<T1, T2> make_pair(const T1& r, const T2& l) {
    return std::pair<T1, T2>(r, l);
}

#endif // __MAKEPAIR__