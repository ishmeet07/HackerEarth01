//toggle string hacker earth
// this is made by ishmeet singh
#include <stdio.h>
#include<string.h>

int main()
{
		char a[100];
		
		scanf("%s", &a); 
		int k= strlen(a)-1;
		
  	
	
		for(int i=0;i<=k;i++)
	{ 		if(isupper(a[i]))
   				a[i]= tolower(a[i]);
			else if(islower(a[i]))
 				a[i]=toupper(a[i]);
	}
 	for(int i=0;i<=k;i++)
	 printf("%c", a[i]); 
}
