/*
This program will maintain the information about grocery items and calculate the cost,
discount amount, and the cost with discount

Written by: Andrew Nguyen
CS 36
7/3/2018
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	char itemname1[20];
	char brand1[20];
	float unitprice1;
	float discount1;
	int quantity1;
	float cost1;
	float discountamount1;
	float costdiscount1;

	printf("Enter the item name.\n");
	gets_s(itemname1);
	printf("Enter the brand.\n");
	gets_s(brand1);
	printf("Enter the unit price.\n");
	scanf("%f", &unitprice1);
	printf("Enter the quantity.\n");
	scanf("%d", &quantity1);
	if (quantity1 >= 1 && quantity1 <= 3)
		discount1 = 3.8;
	else if (quantity1 >= 4 && quantity1 <= 7)
		discount1 = 5.1;
	else if (quantity1 >= 8 && quantity1 <= 12)
		discount1 = 7.4;
	else if (quantity1 > 12)
		discount1 = 9.8;
	printf("Your discount percent is \n%0.2f\n", discount1);

	getchar();

	cost1 = unitprice1 * quantity1;
	discountamount1 = cost1 * (discount1 / 100);
	costdiscount1 = cost1 - discountamount1;

	printf("The regular cost of %s %s is \n$%0.2f\n", brand1, itemname1, cost1);
	printf("The discount amount for %s %s is \n$%0.2f\n", brand1, itemname1, discountamount1);
	printf("The cost of %s %s with discount is \n$%0.2f\n\n\n", brand1, itemname1, costdiscount1);

	char itemname2[20];
	char brand2[20];
	float unitprice2;
	float discount2;
	int quantity2;
	float cost2;
	float discountamount2;
	float costdiscount2;

	printf("Enter the item name.\n");
	gets_s(itemname2);
	printf("Enter the brand.\n");
	gets_s(brand2);
	printf("Enter the unit price.\n");
	scanf("%f", &unitprice2);
	printf("Enter the quantity.\n");
	scanf("%d", &quantity2);
	if (quantity2 >= 1 && quantity2 <= 3)
		discount2 = 3.8;
	else if (quantity2 >= 4 && quantity2 <= 7)
		discount2 = 5.1;
	else if (quantity2 >= 8 && quantity2 <= 12)
		discount2 = 7.4;
	else if (quantity2 > 12)
		discount2 = 9.8;
	printf("Your discount percent is \n%0.2f\n", discount2);

	getchar();
	cost2 = unitprice2 * quantity2;
	discountamount2 = cost2 * (discount2 / 100);
	costdiscount2 = cost2 - discountamount2;

	printf("The regular cost of %s %s is \n$%0.2f\n", brand2, itemname2, cost2);
	printf("The discount amount for %s %s is \n$%0.2f\n", brand2, itemname2, discountamount2);
	printf("The cost of %s %s with discount is \n$%0.2f\n\n\n", brand2, itemname2, costdiscount2);

	char itemname3[20];
	char brand3[20];
	float unitprice3;
	float discount3;
	int quantity3;
	float cost3;
	float discountamount3;
	float costdiscount3;

	printf("Enter the item name.\n");
	gets_s(itemname3);
	printf("Enter the brand.\n");
	gets_s(brand3);
	printf("Enter the unit price.\n");
	scanf("%f", &unitprice3);
	printf("Enter the quantity.\n");
	scanf("%d", &quantity3);
	if (quantity3 >= 1 && quantity3 <= 3)
		discount3 = 3.8;
	else if (quantity3 >= 4 && quantity3 <= 7)
		discount3 = 5.1;
	else if (quantity3 >= 8 && quantity3 <= 12)
		discount3 = 7.4;
	else if (quantity3 > 12)
		discount3 = 9.8;
	printf("Your discount percent is \n%0.2f\n", discount3);

	getchar();
	cost3 = unitprice3 * quantity3;
	discountamount3 = cost3 * (discount3 / 100);
	costdiscount3 = cost3 - discountamount3;

	printf("The regular cost of %s %s is \n$%0.2f\n", brand3, itemname3, cost3);
	printf("The discount amount for %s %s is \n$%0.2f\n", brand3, itemname3, discountamount3);
	printf("The cost of %s %s with discount is \n$%0.2f\n\n\n", brand3, itemname3, costdiscount3);

	char itemname4[20];
	char brand4[20];
	float unitprice4;
	float discount4;
	int quantity4;
	float cost4;
	float discountamount4;
	float costdiscount4;

	printf("Enter the item name.\n");
	gets_s(itemname4);
	printf("Enter the brand.\n");
	gets_s(brand4);
	printf("Enter the unit price.\n");
	scanf("%f", &unitprice4);
	printf("Enter the quantity.\n");
	scanf("%d", &quantity4);
	if (quantity4 >= 1 && quantity4 <= 3)
		discount4 = 3.8;
	else if (quantity4 >= 4 && quantity4 <= 7)
		discount4 = 5.1;
	else if (quantity4 >= 8 && quantity4 <= 12)
		discount4 = 7.4;
	else if (quantity4 > 12)
		discount4 = 9.8;
	printf("Your discount percent is \n%0.2f\n", discount4);

	getchar();
	cost4 = unitprice4 * quantity4;
	discountamount4 = cost4 * (discount4 / 100);
	costdiscount4 = cost4 - discountamount4;

	printf("The regular cost of %s %s is \n$%0.2f\n", brand4, itemname4, cost4);
	printf("The discount amount for %s %s is \n$%0.2f\n", brand4, itemname4, discountamount4);
	printf("The cost of %s %s with discount is \n$%0.2f\n\n\n", brand4, itemname4, costdiscount4);

	float totalcost, totaldiscountamount, totalwithdiscount;
	totalcost = cost1 + cost2 + cost3 + cost4;
	totaldiscountamount = discountamount1 + discountamount2 + discountamount3 + discountamount4;
	totalwithdiscount = costdiscount1 + costdiscount2 + costdiscount3 + costdiscount4;

	printf("The total cost is $%0.2f\n", totalcost);
	printf("The total discount amount is $%0.2f\n", totaldiscountamount);
	printf("The total amount with discount is $%0.2f\n", totalwithdiscount);

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