#ifdef STAND_ALONE
#   define BOOST_TEST_MODULE UT_Symbols
#endif
#include <boost/test/unit_test.hpp>

#include <symbol.h>
using namespace sudoku;

BOOST_AUTO_TEST_SUITE( UT_Symbols )

BOOST_AUTO_TEST_CASE( ReadFromString )
{
    symbol<9> var("1"); 
    BOOST_TEST(var.get()==1);
}

BOOST_AUTO_TEST_CASE( ReadFromHexa )
{
    symbol<16> var("A");
    BOOST_TEST(var.get()==10);
}

BOOST_AUTO_TEST_CASE ( ReadFromBase36 )
{
    symbol<36> var("Z");
    BOOST_TEST(var.get()==35);
}

BOOST_AUTO_TEST_SUITE_END()
