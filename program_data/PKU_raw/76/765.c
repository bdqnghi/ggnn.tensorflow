

int main()
{
	int a[1000],b[1000];
	int i,j,k,n,max=0,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		if (i==0) min=a[i];
		if (a[i]<min) min=a[i];
		if (b[i]>max) max=b[i];
	}
	for(i=min;i<=max;i++)
	{
		k=0;
		for(j=0;j<n;j++)
		{
			if (((i<b[j])&&(i>=a[j]))||((i==b[j])&&(j==n-1)))
			{
				k=1;
				break;
			}
		}
		if (k==0) 
		{
			printf("no\n");
			break;
		}
	}
	if (k!=0) printf("%d %d\n",min,max);
	return 0;
}
