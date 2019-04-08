void main( )
{
	int n,i,j,k,sum=0;
	int a[20000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0;i<n-sum;i++)
	for(j=i+1;j<n-sum;j++)
	{
		if(a[j]==a[i])
		{
			for(k=j;k<n-sum-1;k++)
			a[k]=a[k+1];
			sum++;
			j--;
		}
	}
for(i=0;i<n-sum-1;i++)
{
	printf("%d ",a[i]);
}
printf("%d",a[n-sum-1]);
}