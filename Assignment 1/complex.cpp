//
// Created by tahsin on 6/14/2017.
//
#include"complex.h"

namespace Tahsin{ //my namespace

    complex::complex(double r, double i){ //overloaded constructor
        real=r;
        imag=i;
    }

    double complex:: get_real() const{ // get real number as const
        return real;

    }
    double complex::get_img() const{ // get img number as const
        return imag;
    }
    void complex:: print() const{
        std:: cout<<"Constant object print function is working" << std::endl;
        std:: cout<< "("<<real <<"+" <<imag <<"i)" << std::endl;
    }


    complex add_complex(const complex& c1, const complex& c2){ // non-member add function

        double add_real=c1.get_real()+ c2.get_real();
        double add_imag = c1.get_img() +c2.get_img();
        complex add (add_real,add_imag);
        return add;
}
    complex subtract_complex (const complex& c1,const complex& c2 ){// non member subtract function

        double sub_real = c1.get_real()-c2.get_real();
        double sub_imag = c1.get_img()-c2.get_img();

        complex sub (sub_real,sub_imag);
        return sub;

    }
}

