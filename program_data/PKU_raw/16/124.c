// pro.cpp : Defines the entry point for the console application.
//


int main(int argc, char* argv[])
{
	int n,b,c=11,i=1,j=1;
	scanf("%d",&n);
	
	if (n==0)
		printf("%d",n);
	else
		
		
		while(n>0)
		{
			
			b=n%10;
			printf("%d",b);	
			n=n/10;
			
			
		} 
		
		return 0;
}
