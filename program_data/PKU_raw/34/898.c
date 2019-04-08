int gujiao(int x);
int main()
{
	int x;
	scanf("%d",&x);
	if(x==1)
	{
		printf("End");
	}
	else
	{
		while(x!=1)
		{
			x=gujiao(x);
			if(x==1)
			{
				printf("End");
				break;
			}
			
		}
	}
	return 0;
}
int gujiao(int x)
{
	int x0=x;
	if(x%2==1)
	{
		x=3*x0+1;
		printf("%d*3+1=%d\n",x0,x); 
	}
	else
	{
		x=x0/2;
		printf("%d/2=%d\n",x0,x); 
	}
	return x;
}