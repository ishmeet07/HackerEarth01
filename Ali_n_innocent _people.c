 
 //Ali and Helping innocent people
 // this is made by ishmeet singh 
 #include <stdio.h>

int main()
  {
	    char code[50];
		//printf("enter");
	     for(int i=0;i<9;i++)
		 scanf("%c", &code[i]);              			// Reading input from STDIN
	int a=code[0]+code[1];
	  int b =code[3]+code[4];
	  int c=code[4]+code[5];
	  int d=code[7]+code[8];
		int flag=0; 	          			// Reading input from STDIN
       if((a%2==0)&&(b%2==0)&&(c%2==0)&&(d%2==0))
	     flag =1;
       if((code[2]=='A')||(code[2]=='E')||(code[2]=='I')||(code[2]=='O')||(code[2]=='U')||(code[2]=='Y'))
	     flag =0;

	 if (flag==0) 
	  printf("invalid");
	  else
	  printf("valid");
  }
	 
  
