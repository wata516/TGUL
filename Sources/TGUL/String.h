#pragma once

#include <string>

namespace TGUL
{
    class String : public std::string
    {
    public:
		String( ) : std::string() {}
        String( const char *str ) : std::string( str ) {}
		String( const String &str ) : std::string( str.c_str() ) {}
		
		operator const char *() { return c_str(); }
    };
}
