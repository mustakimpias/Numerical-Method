#include<stdio.h>
#include<math.h>
#include<conio.h>
#define e 0.001
#define f(x) 3*x-cos(x)-1

int main()
{
    int i = 0;
    float x0, x1, x2, f0, f1, f2;
    printf("Enter the value of x0 and x1: ");
    scanf("%f %f", &x0, &x1);
    do
    {
        f0=f(x0);
        f1=f(x1);
        f2=f(x2);
        x2=((x0*f1)-(x1*f0))/(f1-f0);
        if(f0*f2<0)
        {
            x1=x2;
            f1=f2;
        }
        else
        {
            x0=x2;
            f0=f2;
        }
        i++;
        printf("Number of iterations = %d\t", i);
        printf("Root = %f\t", x2);
        printf("\tValue of function = %f\n", f2);
    }while(fabs(f2)>e);

    getch();
    return 0;
}
