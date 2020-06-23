#include<stdio.h>
#include<math.h>
#include<conio.h>
#define e 0.001
#define f(x) sin(x)-(x/2)
#define df(x) cos(x)-.5

int main()
{
    float x0,f0,df0,x1,f1;
    printf("Enter the value of x0: ");
    scanf("%f",&x0);
    int i=0;
    printf("\n\n");
    do
    {
        f0=f(x0);
        df0=df(x0);
        x1=x0-(f0/df0);
        f1=f(x1);
        x0=x1;
        i++;
        printf("Number of iteration = %d    ",i);
        printf("\tRoot is = %.4f",x1);
        printf("\tValue of the function = %.4f\n",f1);
    }
    while(fabs(f1)>e);

    getch();
    return 0;
}
