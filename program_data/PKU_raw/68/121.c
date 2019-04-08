
int joy(int a, int b)
{	
	int i;
	for (i=2;i*i<=a;i++)
	{
		if (a%i==0)
		{
//			printf("i=%d\n",i);
			return 0;
		}
	}
	for (i=2;i*i<=b;i++)
	{
		if (b%i==0)
		{
//			printf("i=%d\n",i);
			return 0;
		}
	}
	return 1;
}


int main()
{
	int n,i,k;
	int x,y;
	scanf("%d",&n);
	
	for (k=6;k<=n;k=k+2)
	{

	for (i=2;i<=k/2;i++)
	{
		x=i;
		y=k-x;
		if (joy(x,y)==1)
		{		
				printf("%d=%d+%d\n",k,x,y);
				break;
		}
	}
	}

	return 0;

}