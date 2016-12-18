#ifdef STAND_ALONE
#   define BOOST_TEST_MODULE UT_Cells
#endif
#include <boost/test/unit_test.hpp>

#include <cell.h>

using namespace sudoku;

BOOST_AUTO_TEST_SUITE( UT_Symbols )

BOOST_AUTO_TEST_CASE( Locking )
{
    typedef symbol<9> symbol_t;
    typedef cell<symbol_t> cell_t;

    cell_t a(symbol_t("8"));
    BOOST_TEST( a.is_locked() == true );
    cell_t b(symbol_t::UNDEFINED);
    BOOST_TEST( b.is_locked() == false );
}

BOOST_AUTO_TEST_SUITE_END()
