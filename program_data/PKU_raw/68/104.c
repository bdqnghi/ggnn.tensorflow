

int sushu(int a)
{
	int yes=1,i;
	for(i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
		yes=0;
		break;
		}
	}
	return yes;
}

int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(j=6;j<=n;j++)
	{
		if(j%2==0)
		{
			for(i=2;i<=j;i++)
			{
				if(sushu(i)&&sushu(j-i)==1)
				{
			        printf("%d=%d+%d\n",j,i,j-i);
					break;
				}
			}
		}
	}
	
	return 0;
}