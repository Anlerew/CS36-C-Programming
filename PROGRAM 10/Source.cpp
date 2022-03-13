#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Item 
{
	char name[100];
	char brand[100];
	float price;
	int quantity;
	float discount;
};

void initializeItemList(struct Item * items) 
{
	struct Item item1;
	strcpy_s(item1.name, "Banana");
	strcpy_s(item1.brand, "Chiquita");
	item1.price = 6.19;
	struct Item item2;
	strcpy_s(item2.name, "Cereal");
	strcpy_s(item2.brand, "Yum Yum");
	item2.price = 1.99;
	struct Item item3;
	strcpy_s(item3.name, "Chocolate Candy");
	strcpy_s(item3.brand, "Snickers");
	item3.price = 4.89;
	struct Item item4;
	strcpy_s(item4.name, "Milk");
	strcpy_s(item4.brand, "Have A Cow");
	item4.price = 1.11;
	items[0] = item1;
	items[1] = item2;
	items[2] = item3;
	items[3] = item4;
}

//this function will set value of discount BASED ON quantity

float getDiscount(int quantity) {
	if (quantity >= 1 && quantity <= 3) { return 3.8; }
	else if (quantity >= 4 && quantity <= 7) { return 5.1; }
	else if (quantity >= 8 && quantity <= 12) { return 7.4; }
	else if (quantity >= 12) { return 9.8; }
	else return 0;
}

void savetext(struct Item s[], int n)
{
	FILE *f;
	f = fopen("D:\\item.txt", "w");
	for (int i = 0; i < 4; i++)
	{
		fprintf(f, "%s %s\n", s[i].name, s[i].brand);
		fprintf(f, "%f %d %f\n", s[i].price, s[i].quantity, s[i].discount, s[i].cost, s[i].discountamount, s[i].costwithdiscount);
	}
	fclose(f);
}

void retrievetext(struct Item s[], int n)
{
	FILE *f;
	int length;
	f = fopen("D:\\item.txt", "r");
	for (int i = 0; i < n; i++)
	{
		fgets(s[i].name, sizeof(s[i].name), f);
		fgets(s[i].brand, sizeof(s[i].brand), f);
		length = strlen(s[i].name);
		length = strlen(s[i].brand);
		s[i].name[length - 1] = '\0';
		fscanf(f, "%f%d%f\n", &s[i].price, &s[i].quantity, &s[i].discount, &s[i].cost, &s[i].discountamount, &s[i].costwithdiscount);
	}
	fclose(f);
}

void savebin(struct Item s[], int n)
{
	FILE *f;
	f = fopen("D:\\item.bin", "wb");
	fwrite(&s, sizeof(s[0]), n, f);
	fclose(f);
}

void retrievebin(struct Item s[], int n)
{
	FILE *f;
	f = fopen("D:\\item.bin", "rb");
	fread(&s, sizeof(s[0]), n, f);
	fclose(f);
}

void print(struct Item s[], int n)
{

		printf("\n\n");
		for (int i = 0; i < n; i++)
		{
			printf("\n%-20s%-15s%-15s%-15s%-15s%-15s%-20s%-20s\n", "Item Name", "Brand", "Unit Price", "Quantity", "Discount %", "Cost", "Discount Amount", "Cost with Discount");
			printf("%-20s%-15s%-15.2f%-15d%-15.2f%-15.2f%-20.2f%-20.2f\n", items[i].name, items[i].brand, items[i].price, items[i].quantity, discount, cost, discountamount, costwithdiscount);
		}
	

}

int main()
{
	Item;
	int itemSize = 4;
	struct Item items[4];
	initializeItemList(items);
	int i;
	for (i = 0; i < itemSize; i++)
	{
		printf("Enter item quantity for item %s : ", items[i].name);
		scanf("%d", &items[i].quantity);
		items[i].discount = getDiscount(items[i].quantity);
	}
	printf("\n%-20s%-15s%-15s%-15s%-15s%-15s%-20s%-20s\n", "Item Name", "Brand", "Unit Price", "Quantity", "Discount %", "Cost", "Discount Amount", "Cost with Discount");
	float discount, cost, discountAmount, costWithDiscount;
	for (i = 0; i < itemSize; i++)
	{
		discount = items[i].discount;
		cost = items[i].price*items[i].quantity;
		discountAmount = cost * discount / 100;
		costWithDiscount = cost - discountAmount;
		printf("%-20s%-15s%-15.2f%-15d%-15.2f%-15.2f%-20.2f%-20.2f\n", items[i].name, items[i].brand, items[i].price, items[i].quantity, discount, cost, discountAmount, costWithDiscount);
	}
	savetext(s);
	retrievetext(s);
	printf("\n\nAfter the text file is recieved\n\n");
	print(s);
	savebin(s);
	retrievebin(s);
	printf("\n\nAfter the binary file is recieved\n\n");
	print(s);


	system("PAUSE");
}
/*
Enter item quantity for item Banana : 15
Enter item quantity for item Cereal : 4
Enter item quantity for item Chocolate Candy : 8
Enter item quantity for item Milk : 3

Item Name           Brand          Unit Price     Quantity       Discount %     Cost           Discount Amount     Cost with Discount
Banana              Chiquita       $6.19           15             9.80           92.85          9.10                83.75
Cereal              Yum Yum        $1.99           4              5.10           7.96           0.41                7.55
Chocolate Candy     Snickers       $4.89           8              7.40           39.12          2.89                36.23
Milk                Have A Cow     $1.11           3              3.80           3.33           0.13                3.20

After the text file is recieved

Item Name           Brand          Unit Price     Quantity       Discount %     Cost           Discount Amount     Cost with Discount
Banana              Chiquita       $6.19           15             9.80           92.85          9.10                83.75
Cereal              Yum Yum        $1.99           4              5.10           7.96           0.41                7.55
Chocolate Candy     Snickers       $4.89           8              7.40           39.12          2.89                36.23
Milk                Have A Cow     $1.11           3              3.80           3.33           0.13                3.20

After the binary file is recieved

Item Name           Brand          Unit Price     Quantity       Discount %     Cost           Discount Amount     Cost with Discount
Banana              Chiquita       $6.19           15             9.80           92.85          9.10                83.75
Cereal              Yum Yum        $1.99           4              5.10           7.96           0.41                7.55
Chocolate Candy     Snickers       $4.89           8              7.40           39.12          2.89                36.23
Milk                Have A Cow     $1.11           3              3.80           3.33           0.13                3.20

Press any key to continue . . .


*/