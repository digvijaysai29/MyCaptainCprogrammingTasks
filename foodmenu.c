#include<stdio.h>
int main()
{
	//Display options from 1 to 5
	printf("Pick a number : \n1 \n2 \n3 \n4 \n5");
	//Read user entered value
	int choice=0;
	scanf("%d",&choice);
	//Display food item based on users choice
	
	switch(choice)
	{
		case 1:
			printf("Food item - Sandwich \nPrice - Rs.149");
			break;
	    case 2:
	    	printf("Food item - Pasta \nPrice - Rs.179");
	    	break;
	    case 3:
	    	printf("Food item - Pizza \nPrice - Rs.239");
	    	break;
	    case 4:
	    	printf("Food item - Burger \nPrice - Rs.129");
	    	break;
	    case 5:
	    	printf("Food item - French Fries \nPrice - Rs.179");
	    	break;
	    	default : printf("Please choose a number");
	}
}
