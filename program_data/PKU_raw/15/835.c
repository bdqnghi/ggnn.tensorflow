int main()
{
	int n,a[1001],i,p,j,s=0,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
			if(a[j]==0)  count++;
			if(count==1&&a[j]!=0)  s++;
		}
	}
	printf("\n%d",s);
	return 0;
}