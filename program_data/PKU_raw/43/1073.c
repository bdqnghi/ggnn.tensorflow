int main()
{
	int m,n,t,l,i,j;
	scanf("%d",&m);
	for(i=2;i<=m/2;i++)
	{
		t=1;
		l=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				t=-1;
				break;
			}
		}
		if(t==1&&i%2!=0)
		{
			n=m-i;
			for(j=2;j<=n/2;j++)
			{
				if(n%j==0)
				{
					l=-1;
					break;
				}
			}
			if(l==1&&l%2!=0)
				printf("%d %d\n",i,n);
		}
	}
	return 0;
}