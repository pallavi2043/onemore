#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks a child gain ut of 500=\n");
    scanf("%d",&marks);
    if (marks>=450&&marks<=500)
    puts("A grade");
    else if(marks>=400&&marks<450)
    puts("b grade");
    else if(marks>=350&&marks<400)
    puts("c grade");
    else if(marks>=250&&marks<350)
    puts("d grade");
    else if(marks>=150&&marks<250)
    puts("e grade");
    else if(marks<150)
    puts("f grade");
    else
    puts("nothing");
    return 0;


}