//
// Created by tahsin on 6/14/2017.
//
#pragma once

#include <iostream>
#ifndef ASSIGNMEN_1_COMPLEX_H
#define ASSIGNMEN_1_COMPLEX_H
namespace Tahsin{ // my namespace
    class complex
    {
    public:

        //overloaded constructor
        complex(double,double);
        //get real number as const
        double get_real() const;
        //get imaginary number as const
        double get_img() const;
        //print function
        void print() const;

        //adding function with non-member
       friend complex add_complex(const complex&, const complex&);
        //subtracting function with non-member
        friend complex subtract_complex(const complex&, const complex&);

    private:
        //variables for complex numbers
        double real;
        double imag;
    };
}

#endif //ASSIGNMEN_1_COMPLEX_H
