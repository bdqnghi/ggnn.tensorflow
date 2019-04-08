//????????13

const int chushu=13;  
int main(void)
  {
     char n[101],answer[100];
	 int a=1,b=1,c=1,i=0;
     scanf("%s",n);
	 
	 if(strlen(n)<2)
	 {
		printf("0\n%c",n[0]);
	 }
	 else if(strlen(n)<3)
	 {
         c=10*(n[0]-'0')+(n[1]-'0');
		 printf("%d\n%d",c/chushu,c%chushu);
	 }
	 else
	 {
	 a=(n[0]-'0');
     a=a*10+(n[1]-'0');
		 if(a<chushu)  
					{
						a=a%chushu;
					 for(i=1;n[i+1]!='\0';i++)
							 {
								a=a*10+(n[i+1]-'0');
								answer[i-1]=(a/chushu+'0');
									a=a%chushu;
							 }
					  answer[i-1]='\0'; 
					 }
		 else 
		 {
			 
			 answer[0]=(a/chushu)+'0';
		     a=a%chushu;
			  for(i=1;n[i+1]!='\0';i++)
				{
					a=a*10+(n[i+1]-'0');
					answer[i]=(a/chushu)+'0';
						a=a%chushu;
				 }
			  answer[i]='\0';
		 }
	
		
			 

	 printf("%s\n%d",answer,a);
	 
	 } 
	 return 0;

     
  }