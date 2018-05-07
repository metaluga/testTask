#include "catch/catch.hpp" 
#include "Add.h"
#include <iostream>
#include <string>


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
    std::string Add(std::string str1, std::string str2)
	{
        // Before proceeding further, make sure length
        // of str2 is larger.
        if (str1.length() > str2.length())
            std::swap(str1, str2);

        // Take an empty string for storing result
        std::string str = "";

        // Calculate lenght of both string
        int n1 = str1.length(), n2 = str2.length();
        int diff = n2 - n1;

        // Initialy take carry zero
        int carry = 0;

        // Traverse from end of both strings
        for (int i=n1-1; i>=0; i--)
        {
            // Do school mathematics, compute sum of
            // current digits and carry
            int sum = ((str1[i]-'0') +
                       (str2[i+diff]-'0') +
                       carry);
            str.push_back(sum%10 + '0');
            carry = sum/10;
        }

        // Add remaining digits of str2[]
        for (int i=n2-n1-1; i>=0; i--)
        {
            int sum = ((str2[i]-'0')+carry);
            str.push_back(sum%10 + '0');
            carry = sum/10;
        }

        // Add remaining carry
        if (carry)
            str.push_back(carry+'0');

        // reverse resultant string
        reverse(str.begin(), str.end());

        return str;
	}

	TEST_CASE("exercise5")
	{
		// enable to run exercise 6 tests
#if 1
        REQUIRE(Add("1", "2") == "3");

        std::string                       BigNum( "1000000000000000000000000000000000000000000000000000000000000");
        std::string                       BigNum2("9999999999999999999999999999999999999999999999999999999999999");
        REQUIRE(Add(std::move(BigNum), "1")   == "1000000000000000000000000000000000000000000000000000000000001");
        REQUIRE(Add(std::move(BigNum), "10")  == "1000000000000000000000000000000000000000000000000000000000010");
        REQUIRE(Add(std::move(BigNum), "100") == "1000000000000000000000000000000000000000000000000000000000100");
        REQUIRE(Add(std::move(BigNum), std::move(BigNum2)) == "10999999999999999999999999999999999999999999999999999999999999");
        REQUIRE(Add(std::move(BigNum2), "1") == "10000000000000000000000000000000000000000000000000000000000000");
        REQUIRE(Add("0", "0") == "0");
#endif
	}
}
