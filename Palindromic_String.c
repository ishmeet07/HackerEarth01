//Palindromic String hacker earth
// this is made by ishmeet singh
#include <stdio.h>
#include<string.h>

int main()
{
		char num[100],a[100];
		int flag;
		scanf("%s", &num); 
		int k= strlen(num)-1;
		
  	
		for(int i=k;i>=0;i--)
	
	{   
	
	      a[k-i]=num[i];
		 
		   
	} 
		for(int i=0;i<=k;i++)
	{ 		if(a[i]==num[i])
   					flag=0;
			else
 					flag=1;
	}
 		if(flag==0)
 			
			
 		      printf("YES");
		else
 	{		
 		printf("NO");
	}		
}
