
int main(int argc, char* argv[])
{
	int n,a;
	scanf("%d",&n);
	if(n==1)
		printf("End");
	else{
		do
		{
			if(n%2==0)
			{
				a=n;
				n=a/2;
				printf("%d/2=%d\n",a,n);
			}
			else{
				a=n;
				n=a*3+1;
               	printf("%d*3+1=%d\n",a,n);
				
				
			}
			
			
			
			
		}
		while(n!=1);
		
		
		printf("End");
	}
	return 0;
}
