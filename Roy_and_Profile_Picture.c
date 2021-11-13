
//this is made by ishmeet singh
//Roy and Profile Picture (Hacker earth)
#include <stdio.h>

int main()
{
	int a,b,n,l;
	int c[10000],d[10000],g[10000];
	scanf("%d", &l); 
	scanf("%d", &n);
		for(int i=0;i<n;i++)
	{	scanf("%d%d", &a,&b);  
		c[i]=a;
		d[i]=b;
	} 
	
 		for(int i=0;i<n;i++)
 		{	
		if(c[i]<l||d[i]<l) 
			printf("UPLOAD ANOTHER\n");
		  else if((c[i]==d[i])&&c[i]>=l&&d[i]>=l)
			 printf("ACCEPTED\n");
		   else
			printf("CROP IT\n");
			 
		}
}
