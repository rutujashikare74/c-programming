#include<stdio.h>
int main()
{
    float radius,area,circumference;
    const float PI=3.14;
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);

    area = * radius;
    circumference = 2 *PI * radius;

    printf("Circumference of the circle:%.2f\n",area);
    printf("Circumference of the circle:%.2f\n,circumference");
    return 0;
}