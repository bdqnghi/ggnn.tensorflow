int main()
{
	int n,k,i,j;
	int a[1000],b[1000];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+b[j]==k)
			{
				printf("yes");
			    return 0;
			}
		}
	}
printf("no");
return 0;
}
