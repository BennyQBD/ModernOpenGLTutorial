#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

#include <vector>
#include <sstream>
#include "debugTimer.h"

namespace Util
{
    std::vector<std::string> Split(const std::string &s, char delim)
    {
        std::vector<std::string> elems;
        
        const char* cstr = s.c_str();
        unsigned int strLength = s.length();
        unsigned int start = 0;
        unsigned int end = 0;
        
        while(end <= strLength)
        {
            while(end <= strLength)
            {
                if(cstr[end] == delim)
                    break;
                end++;
            }
            
            elems.push_back(s.substr(start, end - start));
            start = end + 1;
            end = start;
        }
        
        return elems;
    }
};

#endif // UTIL_H_INCLUDED
