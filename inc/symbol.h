#ifndef SYMBOL_H
#define SYMBOL_H

#include <string>

namespace sudoku
{
    template<unsigned int N>class symbol
    {
        static_assert(N>0 && N<=36, "Please enter a correct number of symbols");
        public:
            symbol(const std::string a_str) : m_value( std::stoi(a_str, 0, N) )
            { 
                assert(m_value>=0); assert(m_value <=(N-1));
            };
        
            uint8_t get() { return m_value; };
            static uint8_t min() { return 0; };
            static uint8_t max() { return (N-1); };
            static const symbol UNDEFINED;

            bool operator==(const symbol &rhs) const 
            {
                return m_value == rhs.m_value;
            }
        private:
            symbol() : m_value(255) {};
            uint8_t m_value;
    };

    template<unsigned int N> const symbol<N> symbol<N>::UNDEFINED=symbol<N>();
}

#endif //SYMBOL_H
