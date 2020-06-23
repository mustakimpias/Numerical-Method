#include<stdio.h>
#include<math.h>
#include<conio.h>
#define e 0.001
#define f(x) pow(x,3)-2*x-5

int main()
{
    float a,b,c,f_a,f_b,f_c;
    int i=0;

    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("\nEnter the value of b: ");
    scanf("%f", &b);
    printf("\n\n");

    do
    {
        f_a=f(a);
        f_b=f(b);
        c=(a+b)/2;
        f_c=f(c);
        if(f_a*f_c<=0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
        i++;
        printf("Number of iterations = %d\t", i);
        printf("Root = %.4f\t", c);
        printf("\tValue of the function = %.4f\n", f_c);
    }while(fabs(f_c)>e);

    getch();
    return 0;
}
