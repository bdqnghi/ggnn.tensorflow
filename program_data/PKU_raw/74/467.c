int sushu(int n)
{
	int i;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			return 1;
			break;
		}
	}
	return 0;
}
int reverse(int n)
{
	int i,j;
	int a[10];
	int flag=0;
	int temp;
	temp=n;
	if(n/10==0)
	{
		return 0;
	}
	else if(n/100==0)
	{
		if(n%10==n/10)
		return 0;
		else
		return 1;
	}
	else
	{
	for(i=0;(n/10!=0||n%10!=0);i++)
	{
		a[i]=n%10;
		n=n/10;
	}
	for(j=i-1;j>=0;j--)
	{
		if(a[j]!=a[i-1-j])
		{
			flag=1;
			return 1;
		}
	}
	if(flag==0)
	{
		return 0;
	}
	}
}
void main()
{
	int m,n;
	int i,j;
	int flag=0;
	int flag1=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(sushu(i)==0)
		{
			if(reverse(i)==0)
			{
				flag1=1;
				if(flag==0)
				{
					flag=1;
					printf("%d",i);
				}
				else
				{
					printf(",%d",i);
				}
			}
		}
	}
	if(flag1==0)
	{
		printf("no");
	}
}
				