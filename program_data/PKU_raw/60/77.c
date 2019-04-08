int main()
{
	int i=2,k=1,m=0,j=2,n,num=0;
	int a[10000]={2,3};
	scanf("%d",&n);
	for(i=4;i<=n;i++)
	{
		k=sqrt(i);
		for(m=2;m<=k;m++)
			if(i%m==0) break;
		if(m>=k+1)
		{
			a[j]=i;
			j++;
		}
	}
   /*for(j=0;j<n;j++)
		printf("%d",a[j]);*/

	for(i=1;i<=n;i++)
	{
		if(a[i]==0)
			break;
		if(a[i]-a[i-1]==2)
		{
			printf("%d %d\n",a[i-1],a[i]);
			num++;
		}
	}

	if(num==0)
		printf("empty");
	return 0;

	
		
}

