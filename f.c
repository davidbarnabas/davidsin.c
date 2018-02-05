#include <stdio.h>
void main()
{
    double a1, b2, c3;
    printf("Enter three different n: ");
    scanf("%lf %lf %lf", &a1, &b2, &c3);
    if( a1>=b2 && a1>=c3 )
        printf("%.2f is the largest n.", a1);
    if( b2>=a1 && n2>=c3 )
        printf("%.2f is the largest n.", b2);
    if( c3>=a1 && c3>=b2 )
        printf("%.2f is the largest n.", c3);

    getch();
}
