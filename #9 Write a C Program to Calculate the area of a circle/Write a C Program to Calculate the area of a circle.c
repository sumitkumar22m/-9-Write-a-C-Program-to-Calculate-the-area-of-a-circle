#include<stdio.h>
#include<conio.h>
void main()
{
    int radius;
    float pie,a=22,b=7;
    printf("\t\tFind the Area of circle\n");
    printf("Enter the Radius");
    scanf("%d",&radius);
    pie=a/b;
    printf("%f",pie*radius*radius);
    getch();
}
