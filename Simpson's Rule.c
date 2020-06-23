#include<stdio.h>
#include<math.h>
#include<conio.h>
#define f(x) 1.0/(1.0+x)

int main()
{
    int a,b,n,i;
    double h,sum=0.0,sum1=0.0,sum2=0.0,x,result;
    printf("Enter the values of lower limit a, upper limit b and segment n: ");
    scanf("%d %d %d", &a, &b, &n);
    h=(double)(b-a)/n;
    for(i=1; i<n; i++)
    {
        x=a+(i*h);
        if(i%2!=0)
        {
            sum1=sum1+4*f(x);
        }
        if(i%2==0)
        {
            sum2=sum2+2*f(x);
        }
    }
    sum=sum1+sum2+f(a)+f(b);
    result=(sum*h)/3;
    printf("Result is %.3lf\n", result);

    getch();
    return 0;
}
