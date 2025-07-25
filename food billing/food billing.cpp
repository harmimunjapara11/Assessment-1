#include<stdio.h>
main()
{
	int a,q,total,Pizza=180,Burger=100,Dosa=120,Idli=50;
	char order;
	
	do
	{
	
		printf("------------MENU--------------\n");
		printf("---1.Pizza    prise = 180rs---\n");
		printf("---2.Burger   prise = 100rs---\n");
		printf("---3.Dosa     prise = 120rs---\n");
		printf("---4.Idli     prise =  50rs---\n");
		printf("------------------------------\n");
		
		
		printf("Enter your choise... :");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("You have selected Pizza.\n");
				printf("Enter the quantity : ");
				scanf("%d",&q);
				
				total = total +(q*Pizza);
				printf("total :%d\n",total);
				
				break;
				
			case 2:
				printf("You have selected Burger.\n");
				printf("Enter the quantity : ");
				scanf("%d",&q);
				
				total = total +(q*Burger);
				printf("total :%d\n",total);
				
				break;
				
			case 3:
				printf("You have selected Dosa.\n");
				printf("Enter the quantity : ");
				scanf("%d",&q);
				
				total = total +(q*Dosa);
				printf("total :%d\n",total);
				
				break;
				
			case 4:
				printf("You have selected Idli.\n");
				printf("Enter the quantity : ");
				scanf("%d",&q);
				
				total = total +(q*Idli);
				printf("total :%d\n",total);
				
				break;
				
			
		}
		printf("Do you want to place more orders ? y and n :");
		scanf(" %c",&order);
	}while(order == 'y');
	printf("Total amount = %d",total);
		
}
