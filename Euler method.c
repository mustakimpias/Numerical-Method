#include<stdio.h>
#include<math.h>
#include<conio.h>
#define f(x,y)-x*y

int main()
{
    float x0, y0, h, xn, x, y;
    int i = 0;
    printf("Enter the values of x0, y0, h and xn: ");
    scanf("%f %f %f %f", &x0, &y0, &h, &xn);
    x = x0;
    y = y0;
    printf("No. of iteration      x                y              (x,y)\n");

    while(x<xn)
    {
        y=y+(h*f(x,y));
        x=x+h;
        i++;
        printf("%5d", i);
        printf("%21f", x);
        printf("%17f\t", y);
        printf("(%f,%f)", x,y);
        printf("\n");
    }

    printf("Approximate coordinate (%f,%f)",x,y);

    getch();
    return 0;
}

