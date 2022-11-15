#include<stdio.h>
int main()
{
int Day, Month ,Year;
printf("Enter date month and year\n");
scanf("%d/%d/%d",&Day,&Month,&Year);
printf("Day-%d Month-%d Year-%d",Day, Month, Year);
getch();
return 0;
}
