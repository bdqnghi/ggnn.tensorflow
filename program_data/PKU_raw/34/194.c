
void main()
{
	int n,c;
	scanf("%d",&n);
	if(n==1) printf("End\n");
	else
	{
		do{
			if(n%2)
			{
				c=n*3+1;
				printf("%d*3+1=%d\n",n,c);
			}
			else
			{
				c=n/2;
				printf("%d/2=%d\n",n,c);
			}
			n=c;
		}while(c>1);
		printf("End\n");
	}
}
