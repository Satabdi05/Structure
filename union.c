#include<stdio.h>

union abc
{
    int a;
    float b;
    char c;

};
void main()
{
union abc u;
union abc *ptr = &u;
u.a = 1;
u.b = 4.3;
u.c = 973.23;
printf("a value is :%d\n", ptr->a);
printf("c value is :%c\n", ptr->c);
printf("b value is :%f\n", ptr->b);

}
