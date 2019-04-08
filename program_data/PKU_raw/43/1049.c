int SU(int n)
{
	int i,k=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
			k++;
	}
	if(k==0)
		return 1;
	else
		return 0;
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=3;i<=n/2;i++)
	{
		j=n-i;
		if(SU(i)==1)
		{
			if(SU(j)==1)
				printf("%d %d\n",i,j);
		}
	}
	return 0;
}