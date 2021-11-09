// this is made by ishmeet singh
//HACKER EARTH PROGRAM ZOO (EASY)
#include <stdio.h>

int main(){
	char num[20];
    int k=0,l=0,i; 
    
	scanf("%s", &num);    
	for(i=0;i<20;i++)
	   {           
                if(num[i]=='z'||num[i]=="Z")
                    k++;
	            else if(num[i]=='o'||num[i]=="O")
	                l++;
       }
	k=(2*k);
        if(l==k)
	        printf("Yes");
        else
            printf("No");
}
