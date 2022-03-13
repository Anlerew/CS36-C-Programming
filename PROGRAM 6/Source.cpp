/*
This program will maintain the information about grocery items and calculate the cost,
discount amount, and the cost with discount

Written by: Andrew Nguyen
CS 36
7/17/2018
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void load(char *itemname, char *brand, float *unitprice, int *quantity)
{
	printf("Enter the item name.\n");
	gets_s(itemname, 20);
	printf("Enter the brand.\n");
	gets_s(brand, 20);
	printf("Enter the unit price.\n");
	scanf("%f", &(*unitprice));
	printf("Enter the quantity.\n");
	scanf("%d", &(*quantity));
}
void finddi(int quantity, float *discount)
{
	if (quantity >= 1 && quantity <= 3)
		*discount = 3.8;
	else if (quantity >= 4 && quantity <= 7)
		*discount = 5.1;
	else if (quantity >= 8 && quantity <= 12)
		*discount = 7.4;
	else if (quantity > 12)
		*discount = 9.8;
}
void calc(float unitprice, int quantity, float discount, float *cost, float *discountamount, float *costdiscount)
{
	*cost = unitprice * quantity;
	*discountamount = *cost * (discount / 100);
	*costdiscount = *cost - *discountamount;
}
void print(char itemname, char brand, float discount, float cost, float discountamount, float costdiscount)
{
	printf("Your discount percent is \n%0.2f\n", discount);
	printf("The regular cost of %s %s is \n$%0.2f\n", brand, itemname, cost);
	printf("The discount amount for %s %s is \n$%0.2f\n", brand, itemname, discountamount);
	printf("The cost of %s %s with discount is \n$%0.2f\n\n\n", brand, itemname, costdiscount);
}

void calccost(float cost1, float cost2, float cost3, float cost4, float *totalcost)
{
	*totalcost = cost1 + cost2 + cost3 + cost4;
}
void calctotaldiscount(float discountamount1, float discountamount2, float discountamount3, float discountamount4, float *totaldiscountamount)
{
	*totaldiscountamount = discountamount1 + discountamount2 + discountamount3 + discountamount4;
}
void calctotalwithdiscount(float costdiscount1, float costdiscount2, float costdiscount3, float costdiscount4, float *totalwithdiscount)
{
	*totalwithdiscount = costdiscount1 + costdiscount2 + costdiscount3 + costdiscount4;
}
void printall(float totalcost, float totaldiscountamount, float totalwithdiscount)
{
	printf("The total cost is $%0.2f\n", totalcost);
	printf("The total discount amount is $%0.2f\n", totaldiscountamount);
	printf("The total amount with discount is $%0.2f\n", totalwithdiscount);
}
void main()
{
	int quantity;
	float unitprice, discount, cost, discountamount, costdiscount;
	char itemname, brand;
	load(&itemname, &brand, &unitprice, &quantity);
	getchar();
	finddi(quantity, &discount);
	calc(unitprice, quantity, discount, &cost, &discountamount, &costdiscount);
	print(discount, brand, itemname, cost, discountamount, costdiscount);
	load(&itemname, &brand, &unitprice, &quantity);
	getchar();
	finddi(quantity, &discount);
	calc(unitprice, quantity, discount, &cost, &discountamount, &costdiscount);
	print(discount, brand, itemname, cost, discountamount, costdiscount);
	load(&itemname, &brand, &unitprice, &quantity);
	getchar();
	finddi(quantity, &discount);
	calc(unitprice, quantity, discount, &cost, &discountamount, &costdiscount);
	print(discount, brand, itemname, cost, discountamount, costdiscount);
	load(&itemname, &brand, &unitprice, &quantity);
	getchar();
	finddi(quantity, &discount);
	calc(unitprice, quantity, discount, &cost, &discountamount, &costdiscount);
	print(discount, brand, itemname, cost, discountamount, costdiscount);

	float cost1, cost2, cost3, cost4, totalcost, discountamount1, discountamount2, discountamount3, discountamount4, totaldiscountamount, costdiscount1, costdiscount2, costdiscount3, costdiscount4, totalwithdiscount;
	calccost(cost1, cost2, cost3, cost4, &totalcost);
	calctotaldiscount(discountamount1, discountamount2, discountamount3, discountamount4, &totaldiscountamount);
	calctotalwithdiscount(costdiscount1, costdiscount2, costdiscount3, costdiscount4, &totalwithdiscount);
	printall(totalcost, totaldiscountamount, totalwithdiscount);
	system("PAUSE");

}
/*
Enter the item name.
Cereal
Enter the brand.
Yum Yum
Enter the unit price.
6.19
Enter the quantity.
4
Your discount percent is
5.10
The regular cost of Yum Yum Cereal is
$24.76
The discount amount for Yum Yum Cereal is
$1.26
The cost of Yum Yum Cereal with discount is
$23.50


Enter the item name.
Chocolate Candy
Enter the brand.
Snickers
Enter the unit price.
1.99
Enter the quantity.
8
Your discount percent is
7.40
The regular cost of Snickers Chocolate Candy is
$15.92
The discount amount for Snickers Chocolate Candy is
$1.18
The cost of Snickers Chocolate Candy with discount is
$14.74


Enter the item name.
Milk
Enter the brand.
Have A Cow
Enter the unit price.
4.89
Enter the quantity.
3
Your discount percent is
3.80
The regular cost of Have A Cow Milk is
$14.67
The discount amount for Have A Cow Milk is
$0.56
The cost of Have A Cow Milk with discount is
$14.11


Enter the item name.
Bananas
Enter the brand.
Chiquita
Enter the unit price.
1.11
Enter the quantity.
15
Your discount percent is
9.80
The regular cost of Chiquita Bananas is
$16.65
The discount amount for Chiquita Bananas is
$1.63
The cost of Chiquita Bananas with discount is
$15.02


The total cost is $72.00
The total discount amount is $4.63
The total amount with discount is $67.37
Press any key to continue . . .
*/