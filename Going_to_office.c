// this program made by ishmeet singh
//going to office (hacker earth)
#include <stdio.h>

int main()
{
	long  d,oc,of,od,cs,cb,cm,cd;
	scanf("%ld", &d);
	scanf("%ld%ld%ld", &oc,&of,&od);
	scanf("%ld%ld%ld%ld", &cs,&cb,&cm,&cd);               			// 
	
long k=oc+((d-of)*od);
	
	
	 long m=cb+((d/cs)*cm)+(d*cd);
	if(k<=m)
	printf("Online Taxi") ;
	else
	  printf("Classic Taxi") ;    
}
