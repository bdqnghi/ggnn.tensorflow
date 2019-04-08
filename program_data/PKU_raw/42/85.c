int main()
{
	int a[100000];
	int n,i,k,j,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(j=0,i=0;i<n;i++)
	{
		if(a[i]!=k)
		{
			a[j]=a[i];
			j++;
		}
	}
	for(m=0;m<j-1;m++)
	{
		printf("%d ",a[m]);
	}
	printf("%d",a[j-1]);
}
