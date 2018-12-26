#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Suites
#include <boost/test/included/unit_test.hpp>



int substract(int i, int j) {
	return i - j;
}

BOOST_AUTO_TEST_SUITE(Maths) 
BOOST_AUTO_TEST_CASE(substractTest) {
BOOST_CHECK(substract(3, 3) == 0);
}
	

BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE(Physics) 

BOOST_AUTO_TEST_CASE(foreTest) {
	int F = 250;
	int m = 25;
	int a = 10;
	BOOST_CHECK(F == m * a);
}
BOOST_AUTO_TEST_SUITE_END()



BOOST_AUTO_TEST_CASE(myTestCase)
{
  BOOST_TEST(1 == 1);
  BOOST_TEST(true);
  BOOST_CHECK(substract(3, 4) == -1);
}
