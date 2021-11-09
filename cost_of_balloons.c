//this is made by ishmeet singh
// cost of balloons hacker earth
#include <stdio.h>

int main()
  {
	    int num,green,purple,part;
	     scanf("%d", &num);              			// Reading input from STDIN
	
	  for (int r=0;r<num;r++)
	 {
		 scanf("%d%d", &green,&purple); 
	          			// Reading input from STDIN
		 int arr[10][10];
		scanf("%d", &part);              			// Reading input from STDIN
	//printf(" part%d",part);
	int count=0,count1=0  ;  
		for(int i=0;i<part;i++)   
	{	
		for(int j=0;j<2;j++)  
			scanf("%d",&arr[i][j]);
			printf("\n");
	}	 
	
		for(int i=0;i<part;i++)  
	{	
		for(int j=0;j<2;j++)  
		   if(arr[i][j]==1&&j==0)
	   			{ count+=1;}
	  
      	   else if(arr[i][j]==1&&j==1)
	    		{count1+=1;}
	} 
		if(r%2==0)	
    {	
		int p= (count*green);
	 	int o=(count1*purple);
	 	printf("%d",p+o);
	}
	 	else if (r%2==1) 
	 {	
		 int p= (count*purple);
	 	 int o=(count1*green);
	     printf("%d",p+o);
	 } 
	 }}
   // Writing output to STDOUT
