//this is made by ishmeet singh
//seven segment display
#include <stdio.h>
#include<string.h>

int main()
{
		int num,i,p,l,sum=0,a[1000];
		char b[1000];
		
		scanf("%d", &num); 
		int k=0;             		
		for(i=0;i<num;i++)
	{
		 scanf("%s",&b);
		 	int n=strlen(b);
            	

	for(int j=0;j<n;j++)
		{
			a[j]= b[j]-'0';
		}
	for(int l=0;l<n;l++)
		{	 switch(a[l])
 			{  
				case 0 : k+=6;
            			break;
    			case 1:  k+=2;
	        			break;
				case 2:  k+=5;
						break;
				case 3:  k+=5;
	 					break;
				case 4 : k+=4;
            			break;
    			case 5:  k+=5;
	        			break;
				case 6:  k+=6;
						break;
				case 7:  k+=3;
	 					break; 
	 			case 8:  k+=7;
						break;
				case 9:  k+=6;
	 					break; 
        		default:printf("wrong");
		 
			} 
        }

    		if(k%2!=0)
				{	 printf("7");
			  		for(int p=0;p<((k-3)/2);p++)
			  		printf("1");
				}
		  else
		  		{
					  for(int j=0;j<(k/2);j++)
		 			printf("1");
				}	
printf("\n");
k=0;
    }
}

