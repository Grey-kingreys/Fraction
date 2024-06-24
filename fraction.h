#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED

#include <iostream>

using namespace std;

class fraction
{
    int num;
    int den;

public:

    fraction(int num = 0, int den = 0)
    {
        this->num = num;
        this->den = den;
    }
     void affiche()
     {
         cout << "Le numerateur: " << this->num << endl;
         cout << "Le denomirateur: " << this->den << endl << endl;
         cout << "**********************AFFICHAGE*******************"<< endl << endl;
         cout << this->num << " / " << this->den << endl << endl;

     }

     fraction operator +(fraction F)
     {
         fraction S;
         S.num = this->num + F.num;
         S.den = this->den + F.den;
         return S;
     }

     fraction operator -(fraction F)
     {
         fraction Sous;
         Sous.num = this->num - F.num;
         Sous.den = this->den - F.den;
         return Sous;
     }

     fraction operator * (fraction F)
     {
         fraction multi;
         multi.num = this->num * F.num;
         multi.den = this->den * F.den;
         return multi;
     }

     fraction operator /(fraction F)
     {
         fraction dive;
         dive.num = this->num / F.num;
         dive.den = this->den / F.den;
         return dive;
     }


     fraction operator +(int n)
     {
         fraction S;
         S.num = this->num + (this->den * n);
         S.den = this->den;
         return S;
     }

     fraction operator *(int n)
     {
         fraction S;
         S.num = this->num * n;
         S.den = this->den;
         return S;
     }

     fraction operator -(int n)
     {
         fraction S;
         S.num = this->num - (this->den * n) ;
         S.den = this->den;
         return S;
     }

     fraction operator /(int n)
     {
         fraction S;
         S.num = this->num;
         S.den = this->den * n;
         return S;
     }


};

#endif // FRACTION_H_INCLUDED

