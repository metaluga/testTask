#include "catch/catch.hpp"
#include "Add.h"
#include <iostream>
#include <string>


namespace AyxCppTest
{
	/**
	* Provide an interface to exercise5's add function, so an external 
	* C program can link to it and use it.
	*
	* Sample test cases are provided as a starting point.
	*
	* Tasks:
	*   -Complete the AddStr function.
	*   -Add test cases as appropriate. Repair existing faulty tests as needed.
	*/
	extern "C" const char* AddStr(const char* lhs, const char* rhs)
    {
        std::string str = Add(std::string(lhs), std::string(rhs));
        const char* cstr = str.c_str();

        return cstr;
	}

	TEST_CASE("exercise6")
	{
		// enable to run exercise 6 tests
#if 1
		CHECK(AddStr("1", "2") == "3");
		CHECK(AddStr("42", "2") == "44");
		CHECK(AddStr("20", "22") == "42");
#endif
	}
}
