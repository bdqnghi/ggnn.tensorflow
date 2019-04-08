int main()
{
	int n,i,j,k=0,a[M],len;
	a[0]=1;
	for(i=1;i<M;i++)
		a[i]=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=k+1;j++)
			a[j]*=2;
		for(k=0;k<j;k++)
		{
			if(a[k]>=10)
			{
				a[k]-=10;
				a[k+1]+=1;
			}
		}
	}
	i=0;
	while(i>=0)
	{
		if(a[i]==0&&a[i+1]==0&&a[i+2]==0)
		{
			len=i;
			break;
		}
		i++;
	}
	for(i=len-1;i>=0;i--)
		printf("%d",a[i]);
	return 0;
}
	