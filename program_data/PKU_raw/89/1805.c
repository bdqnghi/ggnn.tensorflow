int main()
{
	int a[300000],b[300000],count[350]={0},i=0,n;
	scanf("%d",&n);
	scanf("%d %d",&a[0],&b[0]);
	while(a[i]!=0||b[i]!=0)
	{
		count[a[i]]=-1;
		count[b[i]]++;
		i=i+1;
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
		if(count[i]>=n-1)
		{
			printf("%d",i);
		    return 0;
		}
	}
		printf("NOT FOUND\n");
	return 0;
}
