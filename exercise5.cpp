#include "catch/catch.hpp" 
#include "Add.h"

namespace AyxCppTest
{
	/**
	* Add two arbitrarily long numbers encoded as strings and return the result
	* as a number encoded as a string.  Each character in the input and output
	* strings is a single digit in the range of [0,9] inclusive.
	*
	* Sample test cases are provided as a starting point.
	*
	* Tasks:
	*   -Complete the Add function.
	*   -Add and repair test cases as appropriate.
	*/
	std::string Add(std::string lhs, std::string rhs)
	{
        //int maxSize = std::max(lhs.size(), rhs.size()) + 1;
        std::string retval;
/*
        for(int i = maxSize-1; i >=0; --i)
        {
            if (lhs.size() - 1 - (maxSize - 1 - i) >= 0)
            {
                retval[i] = (retval[i]-'0') + (lhs[lhs.size()-1 - (maxSize - 1 - i)] - '0') + '0' ;
                if (retval[i] > '9')
                {
                    retval[i - 1] = ((retval[i-1] - '0')  +  (retval[i] - '9')) + '0';
                    retval[i] = '9';
                }
            }

            if (rhs.size() - 1 - (maxSize - 1 - i) >= 0)
            {
                retval[i] = (retval[i]-'0') + (rhs[rhs.size()-1 - (maxSize - 1 - i)] - '0') + '0' ;
                if (retval[i] > '9')
                {
                    retval[i - 1] = ((retval[i-1] - '0')  +  (retval[i] - '9')) + '0';
                    retval[i] = '9';
                }
            }
        }
*/
        //lhs;
        //rhs;

		return retval;
	}

	TEST_CASE("exercise5")
	{
		// enable to run exercise 6 tests
#if 1
		REQUIRE(Add("1", "2") == "3");

		std::string                       BigNum("1000000000000000000000000000000000000000000000000000000000000");
		REQUIRE(Add(std::move(BigNum), "1")   == "1000000000000000000000000000000000000000000000000000000000001");
		REQUIRE(Add(std::move(BigNum), "10")  == "1000000000000000000000000000000000000000000000000000000000010");
		REQUIRE(Add(std::move(BigNum), "100") == "1000000000000000000000000000000000000000000000000000000000100");
#endif
	}
}
