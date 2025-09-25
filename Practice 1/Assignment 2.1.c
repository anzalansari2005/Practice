//engineering unit calculator
#include<stdio.h>;
int main(void)
{
	int Watts;
	printf("Enter Power in Watts:");
	scanf("%d",&Watts);
	int Kilowatts = Watts/1000;
	printf("The Power in Kilowatts is: %d KW",Kilowatts);
	
}