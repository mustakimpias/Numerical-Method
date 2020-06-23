#include<stdio.h>
#include<math.h>
#include<conio.h>
#define f(x) 1.0/x

int main()
{
    int a,b,n,i;
    float h, sum=0.0, x, result;
    printf("Enter the lower limit: ");
    scanf("%d", &a);
    printf("\nEnter the upper limit: ");
    scanf("%d", &b);
    printf("\n\n");
    h = (float)(b-a)/n;
    for(i=1; i<n; i++)
    {
        x = a+h*i;
        sum = sum+(2*f(x));
    }
    sum = sum+f(a)+f(b);
    result = (sum*h)/2;
    printf("Result is: %.4f\n", result);

    getch();
    return 0;
}
