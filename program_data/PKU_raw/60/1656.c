int main()
{
	int a[maxnum],n,i,j,k,l;
	a[0]=3;
	k=1;
    scanf("%d",&n);
	for(i=5;i<=n;i=i+2)
	{
		l=0;
		for(j=0; j<=k-1; j++)
		{
			if(i%a[j]==0) 
			{
				l=1;
				break;
			}
		}
		if(l==0)
		{
			a[k]=i;
			k=k+1;
		}
	}
	if(n<5) printf("empty\n");
	else
	{
		for(i=0;i<=k-2;i++)
		{
			if(a[i]==a[i+1]-2)
				printf("%d %d\n",a[i],a[i+1]);
		}
	}
	return 0;
}