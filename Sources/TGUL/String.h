#pragma once

#include <string>

namespace TGUL
{
    class String : public std::string
    {
    public:
		String( ) : std::string() {}
        String( const char *str ) : std::string( str ) {}
		
		operator const char *() { return c_str(); }
    };
}
