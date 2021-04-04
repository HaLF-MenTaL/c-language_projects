#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int e=12 , num ; 
main()
{
	
	again1 :
	
	int  i = 1 ;

	printf("Which No. of Table You Want To Print : ") ;
	scanf("%d", &num) ;
	
	printf("\n") ;
	
	while(i <= e)
	{
		printf("\n%d x %d = %d", num ,i, num *i ) ;
		i++ ;
	}
	option :
	printf("\n\n\nPress 'P' To Put Number Again.") ;
	printf("\nPress 'Q' To Quit.") ;
	printf("\nPress 'C' To Change The No. Of Multiples.") ;
	printf("\nSelection <") ;
	char option ;
	option = getche() ;
	printf(">") ;
	if(option == 'P' || option == 'p')
	{
		
		system("cls") ;
		printf("    You Have Selected To Put Data Again.\n\n") ;
		goto again1 ;
	}
	
	else if(option == 'q' || option == 'Q')
	{
		system("cls") ;
		printf("    You Have Selected To Quit.") ;
		printf("\n\n\n\n\n\t\t\t***************** THANK YOU FOR USING OUR APP *****************") ;
		printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t  >>>>> Developed By S&N <<<<<") ;
		goto quit ;
	}
	
	else if(option == 'c' || option == 'C')
	{
		system("cls") ;
		printf("    You Have Selected To Change the No. Of Multiples.\n\n") ;
		printf("Enter No. For The Multiples. : ") ;
		scanf("%d", &e) ;
		printf("\n") ;
		
		changeagain :
		
		system("cls") ;
			
		int a = 1 ;
	
		
		printf("Which No. of Table You Want To Print : ") ;
		scanf("%d", &num) ;
		
		
		while(a <= e)
		{
			printf("\n%d x %d = %d", num , a , a*num) ;
			a++ ;
		}
		
		option2 :
		printf("\n\n\nPress 'P' To Put Number Again.") ;
		printf("\nPress 'Q' To Quit.") ;
		printf("\nPress 'C' To Change The No. Of Multiples.") ;
		printf("\nSelection <") ;
		char option2 ;
		option2 = getche() ;
		printf(">") ;
		
		if(option2 == 'P' || option2 == 'p')
		{
			system("cls") ;
			printf("    You Have Selected To Put Data Again.\n\n") ;
			goto changeagain ;
		}
		
		else if(option2 == 'q' || option2 == 'Q')
		{
			system("cls") ;
			printf("    You Have Selected To Quit.") ;
			printf("\n\n\n\n\n\t\t\t***************** THANK YOU FOR USING OUR APP *****************") ;
			printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t  >>>>> Developed By S&N <<<<<") ;
			goto quit ;
		}
		
		else if(option2 == 'c' || option2 == 'C')
		{
			system("cls") ;
			
			printf("Enter No. For The Multiples. : ") ;
			scanf("%d", &e) ;
			printf("\n") ;
			goto changeagain ;
		}
		else
		{
			system("cls") ;
			printf("The option2 You Have Selected Is Invalid.");
			printf("\nPlease Select Valid option2.") ;
			goto option2 ;
		}
		
		goto changeagain ;
	}
	else
	{
		system("cls") ;
		printf("The Option You Have Selected Is Invalid.");
		printf("\nPlease Select Valid Option.") ;
		goto option ;
	}
	
	

	
	quit :
	
	;
		
	
}
