#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIMIT 100
char names[LIMIT][20]; char numbers[LIMIT][11];
int flag=0;
void clrscr()
{
	system("@cls||clear"); //you can use conio.h
}
void shownumb()
{
	for(int i=0;i<flag ;i++)
	{
		printf("%s\t", names[i]);
		printf("%s\n", numbers[i]);
	}
}
void sname()
{
	clrscr();
	char input[20];
	printf("\n=*=*=*=*=*=*=*=*=\n");
	printf("Please write a name that you looking for:  ");
	scanf("%s",input); int i=0;
	while(1)
	{	
		
		if (strcmp(input,names[i]) != 0)
		{
			i++;
			if(i==101)
			{
			printf("\n=*=*=*=*=*=*=*=*=\n");
			printf("Not Found!\n");	
			printf("\nFor Main press 1\n");
			int x=0; scanf("%d", &x);
			clrscr(); 
			if(x==1) { break;}
			}
		}
		else if(strcmp(input, names[i]) == 0)
		{
			printf("\n=*=*=*=*=*=*=*=*=\n");
			printf("%s\t", names[i]);
			printf("%s\n", numbers[i]); 
			printf("\nFor Main press 1\n");
			int x=0; scanf("%d", &x);
			clrscr(); 
			if(x==1) { break;}
		}
		
	}
}
void snumb()
{
	clrscr();
	char input[20];
	printf("\n=*=*=*=*=*=*=*=*=\n");
	printf("Please write a number that you looking for:  ");
	scanf("%s",input); int i=0;
	while(1)
	{	
		
		if (strcmp(input,numbers[i]) != 0)
		{
			i++;
			if(i==101)
			{
			printf("\n=*=*=*=*=*=*=*=*=\n");
			printf("Not Found!\n");	
			printf("\nFor Main press 1\n");
			int x=0; scanf("%d", &x);
			clrscr(); 
			if(x==1) { break;}
			}
		}
		else if(strcmp(input, numbers[i]) == 0)
		{
			printf("\n=*=*=*=*=*=*=*=*=\n");
			printf("%s\t", names[i]);
			printf("%s\n", numbers[i]); 
			printf("\nFor Main press 1\n");
			int x=0; scanf("%d", &x);
			clrscr(); 
			if(x==1) { break;}
		}
		
	}
}
void save()
{
	clrscr();
	printf("\n=*=*=*=*=*=*=*=*=\n");
	printf("Please write a name:  "); scanf("%s", names[flag]);
	printf("Please write the number:  "); scanf("%s", numbers[flag]);
	clrscr(); printf("Success!\n"); flag++;
}
void menu ()
{
	clrscr();
	printf("\n=*=*=*=*=*=*=*=*=\n");
	printf("1. Search by Name\n");
	printf("2. Search by Number\n");
	printf("3. Save Number\n");
	printf("4. Back\n");
	int x=0; scanf("%d", &x);
	if(x==1) {sname();} else if (x==2) {snumb();} else if (x==3){save();} //else if(x==4){break;}
}


int main ()
{
	while(1)
	{
		clrscr();
		shownumb();
		printf("\n=*=*=*=*=*=*=*=*=\n");
		printf("For Menu press 1\n");
		printf("\nFor Exit press 2\n");
		int x=0; scanf("%d", &x);
		clrscr(); 
		if(x==1) { menu();} else if(x==2){return 0;}
		
	}
		
}
