#include <stdio.h>
#include <conio.h>

int strl(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

main()
{
    /*
    int i,j, n = 10;
    
    for(i = 1 ; i <= n ; i++)
    {
    	for(j = i ; j >= 1 ; j--)
	    {
	    	int s = j % 2;
	    	
	    	printf("%d ",s);
		}
		printf("\n");
	}
    */

    char str1[100] = "joseph", str2[100] = "yamba";
    int i, len = strl(str1) + strl(str2) + 2;
    char finalStr[len];

	printf("str1 : %s \n", str1);
	printf("str1 = %d \n", strl(str1));
	printf("str2 : %s \n", str2);
	printf("str2 = %d \n", strl(str2));

	
    for (i = 0; i < len ; i++)
    {
        if(i < strl(str1))
		{  
            finalStr[i]=str1[i];
        } 
		else if(i == strl(str1))
		{  
            finalStr[i]= ' ';
        }
		else if(i > strl(str1))
		{  
            finalStr[i]=str2[i -(strl(str1)+1)];
        } 
		else
        {
        	finalStr[i]= '\0';
		}
    }
    
    printf("strf : %s \n", finalStr);
	printf("strf = %d \n", strl(finalStr));

    getch();
}
