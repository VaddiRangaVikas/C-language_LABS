/*
switch(condition){
    case constant:
        break;
    ....
    default
}
*/
#include<stdio.h>
int main()
{
    int d;
    printf("Enter a number between 1 and 7:");
    scanf("%d", &d);
    switch (d)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Enter valid week day number");
        break;
    }
} 