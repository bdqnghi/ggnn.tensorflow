long int check(long int n)
{
	if(n==1)return 0;
	if(n==2)return 1;
	int j;
	for(j=2;j<=(int)sqrt(n);j++)if(n%j==0)return 0;
	return 1;
}
int main()
{
	long int n,i;
    scanf("%ld",&n);
	for(i=6;i<=n;i=i+2)
	{
		int j;
		for(j=3;j<i;j=j+2)
		{
			if(check(j)&&check(i-j))
			{
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	}
	return 0;
}

