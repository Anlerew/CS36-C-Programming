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
	printf("Enter the discount.\n");
	scanf("%f", &discount1);
	getchar();
	cost1 = unitprice1 * quantity1;
	discountamount1 = cost1 * (discount1 / 100);
	costdiscount1 = cost1 - discountamount1;

	printf("The regular cost of %s %s is \n$%0.2f\n",brand1, itemname1, cost1);
	printf("The discount amount for %s %s is \n$%0.2f\n",brand1, itemname1, discountamount1);
	printf("The cost of %s %s with discount is \n$%0.2f\n\n\n",brand1, itemname1, costdiscount1); 

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
	printf("Enter the discount.\n");
	scanf("%f", &discount2);
	getchar();
	cost2 = unitprice2 * quantity2;
	discountamount2 = cost2 * (discount2 / 100);
	costdiscount2 = cost2 - discountamount2;

	printf("The regular cost of %s %s is $%0.2f\n", brand2, itemname2, cost2);
	printf("The discount amount for %s %s is $%0.2f\n", brand2, itemname2, discountamount2);
	printf("The cost of %s %s with discount is $%0.2f\n\n\n", brand2, itemname2, costdiscount2);

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
	printf("Enter the discount.\n");
	scanf("%f", &discount3);
	getchar();
	cost3 = unitprice3 * quantity3;
	discountamount3 = cost3 * (discount3 / 100);
	costdiscount3 = cost3 - discountamount3;

	printf("The regular cost of %s %s is $%0.2f\n", brand3, itemname3, cost3);
	printf("The discount amount for %s %s is $%0.2f\n", brand3, itemname3, discountamount3);
	printf("The cost of %s %s with discount is $%0.2f\n\n\n", brand3, itemname3, costdiscount3);

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
	printf("Enter the discount.\n");
	scanf("%f", &discount4);
	getchar();
	cost4 = unitprice4 * quantity4;
	discountamount4 = cost4 * (discount4 / 100);
	costdiscount4 = cost4 - discountamount4;

	printf("The regular cost of %s %s is $%0.2f\n", brand4, itemname4, cost4);
	printf("The discount amount for %s %s is $%0.2f\n", brand4, itemname4, discountamount4);
	printf("The cost of %s %s with discount is $%0.2f\n\n\n", brand4, itemname4, costdiscount4);

	float totalcost, totaldiscountamount, totalwithdiscount;
	totalcost = cost1 + cost2 + cost3 + cost4;
	totaldiscountamount = discountamount1 + discountamount2 + discountamount3 + discountamount4;
	totalwithdiscount = costdiscount1 + costdiscount2 + costdiscount3 + costdiscount4;

	printf("The total cost is $%0.2f\n", totalcost);
	printf("The total discount amount is $%0.2f\n", totaldiscountamount);
	printf("The total amount with discount is $%0.2f\n", totalwithdiscount);

	system("PAUSE");
}