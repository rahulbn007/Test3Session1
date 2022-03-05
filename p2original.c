#include <stdio.h>
typedef struct _fraction
{
  int num,den;
}Fraction;
Fraction input_fraction()
{
  Fraction f;
  printf("Enter  the first fraction:\n");
  scanf("%d%d",&f.num,&f.den);
  return f;
}
Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  Fraction L;
  L=((f1.num/f1.den)>(f2.num/f2.den)?((f1.num/f1.den)>(f3.num/f3.den)?(f1):(f3)):((f2.num/f2.den)>(f3.num/f3.den)?(f2):(f3)));
  return L;
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest)
{
  printf("The largest of three fractions : %d/%d %d/%d %d/%d is \n %d/%d\n",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,largest.num,largest.den);
}
int main()
{
  Fraction f1,f2,f3,largest;
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  largest=Largest_fraction( f1,f2,f3);
  output( f1,f2,f3,largest);
  return 0;
}