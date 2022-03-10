#include<stdio.h>
struct_fraction{
  int num,den;
};
typedef struct_fraction Fraction;
Fraction input_fraction();
  
{Fraction x;
  printf("enter the fraction ");
  scanf("%d %d",&x.num,&x.den);
  return x;
}
Fraction largest_Fraction(Fraction f1,Fraction f2)
