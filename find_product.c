// this is made by ishmeet singh
// find product hacker earth
#include <stdio.h>


int main()
{
		int num,a[10000];
		 long x=1;
		scanf("%d", &num);              	// Reading input 
			for( int i=0;i<num;i++)
				scanf("%d",&a[i]);
			for( int i=0;i<num;i++)
	 			
	 {			
	 			x=((x*a[i])%(1000000000+7));
	 
	 }
	printf("%d\n",x);       // Writing output 
}

