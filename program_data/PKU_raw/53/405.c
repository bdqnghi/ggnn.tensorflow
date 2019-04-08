void main()
{
	int a[300],b[300]={0};
	int n,i,j,k=0,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	b[0]=a[0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]==b[k])
				a[j]=0;
		}
		k++;
		for(t=i+1;t<n;t++)
		{
			if(a[t]!=0)
			{
				b[k]=a[t];
				break;
			}
		}
	}
	printf("%d",b[0]);
	for(i=1;i<n;i++)
	{	
	    if(b[i]==0)break;
		printf(",%d",b[i]);
	}
}