#ifndef CELL_H
#define CELL_H

#include <symbol.h>

namespace sudoku
{
    template<typename T> class cell
    {
        public:
            typedef T symbol_t;
            cell(const symbol_t & a_symbol) :
                m_symbol(symbol_t::UNDEFINED)
            {
                set(a_symbol);
            };

            void set(const symbol_t & a_symbol)
            {
                m_symbol = symbol_t(a_symbol);
                m_locked = !(m_symbol == symbol_t::UNDEFINED );
            };

            const symbol_t& get() const { return m_symbol; };

            bool is_locked() const { return m_locked; };
        private:
            symbol_t m_symbol;
            bool m_locked;
    };
}

#endif // CELL_H
