#pragma once

#include <string>

namespace TGUL
{
    class String : public std::string
    {
    public:
        String( const char *str ) : std::string( str ) {}
    };
}
