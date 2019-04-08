
void main()
{
	int a[100],n,i,j,m;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	    scanf("%d",&a[i]);
	for (i=0;i<n;i++)
		for (j=i+1;j<n;j++)
		{
			if (a[j]==a[i])
			{
				for(m=j;m<n;m++)
				{
					a[m]=a[m+1];
				}
                n--;
				j--;
			}
		}
	for (i=0;i<n-1;i++)
		printf("%d,",a[i]);
	printf("%d",a[n-1]);
}