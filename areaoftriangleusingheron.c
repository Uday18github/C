#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,s,area;
printf("sides: ");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area: %.2f",area);
}
