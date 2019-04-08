void main()
{
	int n,i,j,k,a[100]={0};
	float sum=0;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	sum=sum/n;
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(a[j+1]<a[j])
			{
				k=a[j+1];
				a[j+1]=a[j];
				a[j]=k;
			}
		}
	}
	if(sum-a[0]==a[n-1]-sum)
		printf("%d,%d\n",a[0],a[n-1]);
	else
		printf("%d\n",(sum-a[0]>a[n-1]-sum)?a[0]:a[n-1]);
}