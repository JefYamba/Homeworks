#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void biggestTwoValues(int array[])
{
	int i, firstBig = 0, secondBig = 0;
	for(i = 0; i<10 ; i++)
	{
		if(array[i] > firstBig)
		{
			firstBig = array[i];
		}
	}
	
	for(i = 0; i<10 ; i++)
	{
		if((array[i] > secondBig)&&(array[i] != firstBig))
		{
			secondBig = array[i];
		}
	}
	
	printf("Biggest numbers : %d and %d \n", secondBig, firstBig);
}

main(void) {
	
	
	int array[10];
	int i;
	for(i = 0; i<10 ; i++)
	{
		printf("Enter a value : ");
		scanf("%d", &array[i]);
	}
	
	biggestTwoValues(array);
	
	getch();
}
