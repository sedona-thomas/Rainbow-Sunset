#ifndef __TO_STRING_H__
#define __TO_STRING_H__

#include <sstream>

namespace std
{
    template <typename T>
    std::string to_string(const T &n)
    {
        std::ostringstream s;
        s << n;
        return s.str();
    }
}

#endif