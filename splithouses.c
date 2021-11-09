// this is made by ishmeet singh
// split houses hacker earth
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN

	char arr[50];
	
	for(int i=0;i<num+1;i++)   
	scanf("%c",&arr[i]);
	for(int i=0;i<num+1;i++)  
	  { if(arr[i]=='H'&&i==0)
	        arr[i+1]='B';
         else if(arr[i]=='.') 
	        arr[i]='B';
	  }
	int k=0,l=0;
	for(int i=0;i<num;i++)  
	 {  if(arr[i]=='H'&&arr[i+1]=='H')
	      {l=1;
		  }
		 else   
		   {
			 
			 k=1;
		   }
	 }
	
	 if(l!=0)
	 printf("NO");
	 else if(k!=0)
	{     printf("YES\n");
		for(int i=0;i<num+1;i++) 
	       {printf("%c",arr[i]); }  
	 }
   
}
