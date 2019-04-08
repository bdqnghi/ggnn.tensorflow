int a[1000001];
int main()
{
	int n,k,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]!=k)
		{
			printf("%d",a[i]);
			break;
		}
	}
    for(j=i+1;j<n;j++)
	{
		while((a[j]!=k)&&(j<n))
		{
			printf(" %d",a[j]);
			j++;
		}
		if(a[j]==k)
		{
			continue;
		}
	}
	return 0;
}






