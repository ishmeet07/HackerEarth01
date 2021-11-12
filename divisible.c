//this is made by ishmeet singh
//Hacker earth code divisible
#include<stdio.h>
void main() 
     {
    	int N,a=0,b=0;
    	scanf("%d", &N);
    	int i;
     	int A[100000];
    		for(i=0; i<N; i++)
    			{scanf("%d", &A[i]);}

    
      		for(i=0;i<N/2;i++)
       { 
       		while(A[i]>=10){ 
				   	 A[i]=A[i]/10;
					  
       		  }
       }
      		for(i=N/2;i<N;i++)
        		A[i]=A[i]%10;
     	
      		for(i=0; i<N; i++) 
      {		
		  	if(i%2!=0)
              
         		a=a+A[i];
       		else 
         		b=b+A[i];
			 
         
       
      } 

      //printf("%d\n%d", a,b);
	  	int k=a-b;
       
      		if(k%11==0)
      	
		  	{ 
            	 printf("OUI");}
         	else
      {
		  
      			printf("NON"); }
      
     }  
