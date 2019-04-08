void main()
{
	int k,i,j,l=0;
	int a[25]={0},b[25]={0};
	scanf("%d",&k);
	for(i=0;i<=k-1;i++)
		scanf("%d",&a[i]);
	b[k-1]=1;
	for(i=k-2;i>=0;i--)
	{
		for(j=i+1;j<=k-1;j++)
			if(a[i]>=a[j]&&b[i]<=b[j])
				b[i]=b[j]+1;
			if(b[i]==0)
				b[i]=1;
	}
	for(i=0;i<=k-2;i++)
		for(j=0;j<=k-2-i;j++)
			if(b[j]>b[j+1])
			{
				l=b[j+1];
				b[j+1]=b[j];
				b[j]=l;
			}
	printf("%d\n",b[k-1]);
}
