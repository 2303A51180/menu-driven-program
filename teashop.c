#include<stdio.h>
int main()
{
    int c,r,No_cups;
    char ch,s;
    float amount;
    do
	{                                                                                                                                        
    printf("\n T.Tea");
    printf("\n C.Coffee");
    printf("\n Enter your choice");
    scanf("%c",&ch);
        switch(ch)
        {
            case 'T':printf("\n 1.GreenTea");
		         printf("\n 2.LemonTea");
				 printf("\n 3.BlackTea");
				 printf("\n Enter your choice in tea");
				 scanf(" %c",&c);
				 switch(c)
				 {
				 	case 'G':printf("Enter r & No_cups");
				 			scanf("%d%d",&r,&No_cups);
				 			amount=r*No_cups;
				 			printf("amount=%f",amount);
				 			break;
				 	case 'L':printf("Enter r & No_cups");
					 		scanf("%d%d",&r,&No_cups);
							amount=r*No_cups;
							printf("amount=%f",amount);
							break;
					case 'B':printf("Enter r & No_cups");
							scanf("%d%d",&r,&No_cups);
							amount=r*No_cups;
							printf("amount=%f",amount);
							break;
				 }
				 break;
            
            case 'C':printf("\n 1.Black coffee");
		         printf("\n 2.Cold coffee");
				 printf("\n Enter your choice in tea");
				 scanf(" %c",&c);
				 switch(c)
				 {
				 	case 'B':printf("Enter r & No_cups");
				 			scanf("%d%d",&r,&No_cups);
				 			amount=r*No_cups;
				 			printf("amount=%f",amount);
				 			break;
				 	case 'C':printf("Enter r & No_cups");
					 		scanf("%d%d",&r,&No_cups);
							amount=r*No_cups;
							printf("amount=%f",amount);
							break;
				 }
                 break;
            
        }
        printf("\n do you want to continue:%c");
        scanf(" %c",&s);
    }
    while(s=='y');
}
