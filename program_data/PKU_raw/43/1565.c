int SS(int i);
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=3;i<=n/2;i++)
	{
		if(SS(i)&&SS(n-i))
			printf("%d %d\n",i,n-i);
	}
}

int SS(int i)
{
	int k;
	for(k=2;k<=i-1;k++)
		if(i%k==0)break;
		if(k<i)return 0;
		else
			return 1;
}