#include<stdio.h>
main()
{
 char name[20];
int tea,coffee;
int cup_of_tea,cup_of_coffee;
int total_price_of_tea,total_price_of_coffee,total_bill;
tea=10;
coffee=20;
printf("Enter the name\n",name);
scanf("%s",name);
printf("Enter the number of tea\n");
scanf("%d",&cup_of_tea);
printf("Enter the number of coffee\n");
scanf("%d",&cup_of_coffee);

total_price_of_tea=tea*cup_of_tea;
total_price_of_coffee=coffee*cup_of_coffee;
total_bill=total_price_of_tea+total_price_of_coffee;
printf("Mr.%s total bill is %d taka",name,total_bill);
}
