int sushu(int n);
int main()
{
	int n,i,j,t;
	scanf("%d",&n);
	for(t=6;t<=n;t=t+2)
	{
		for(i=1;i<=t/2;i++)
		{
			j=1;
			if(sushu(i))
			{
				j=t-i;
				if(sushu(j))
				{
					printf("%d=%d+%d\n",t,i,j);
					break;
				}
			}
		}
	}
	return 0;
}
int sushu(int n)
{
	int i,m=0;
	if(n==0) return 0;
	if(n==1) return 0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) m=m+1;
	}
	if(m!=0) return 0;
	else return 1;
}