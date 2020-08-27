#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, c, x1,x2,k=0;
  printf("Please, enter coefficients"
         "of the equation");
  scanf("%f%f%f",&a,&b,&c);
  k=sqrt(b*b-4*a*c);
  if(a==0)
  {
    x1=-c/b;
    printf("Odin koren = %f",x1);
  }
  else if((b*b-4*a*c<0)&&(a!=0))
    printf("korney net");
  else if((k==0)&&(a!=0))
  {
    x1=-b/(2*a);
    printf("Odin koren = %f",x1);
  }
  else if((k>0)&&(a!=0))
  {
    x1=(-b+k)/(2*a);
    x2=(-b-k)/(2*a);
    printf("Dva kornya = %f and %f",x1,x2);
  }
}
