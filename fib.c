#include <stdio.h>
int main ()
{
int fib1=0,fib2=1,fib3,count,n;
Printf ("enter the number to print the series");
Scanf ("%d",&n);
Printf ("%d",fib1);
Printf ("%d",fib2);
Count=2;
While (count <n)
{
Fib3=fib1+fib2;
Count++;
Printf ("%d",fib3);
Fib1=fib2;
Fib2=fib3;

}
}
