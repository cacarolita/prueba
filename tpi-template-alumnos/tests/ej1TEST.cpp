#include "gtest/gtest.h"
#include "../ejercicios.h"

TEST(esSenial, senialEsValida) {
    int prof = 8;
    int freq = 10;
    
    senial sig = { 9,   43,   54,  103,   44,   59,  -10,  -44,  -55, -104,  -45,
        -60,    9,   43,   54,  103,   44,   59,  -10,  -44,  -55, -104,
        -45,  -60,    9};
    
    EXPECT_TRUE(esSenial(sig,prof,freq));
}
