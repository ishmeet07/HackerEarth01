#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	
	int data[N];
	for(int i=0; i<N; i++)
	    scanf("%d", &data[i]);
        
	 
	  
	 
if(data[N-1]%10==0)
  printf("Yes");
  else
  printf("No");
    

    
    return 0;
}
