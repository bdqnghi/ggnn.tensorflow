/*????????1?*/
void main()
{
	int a[300],b[300]={0},j,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		if(b[i]==0)
		{
			for(j=n-1;j>i;j--)
			{
				if(b[j]==1)
					continue;
				else if(a[j]==a[i])
					b[j]=1;
			}
		}

	}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
		if(b[i]==0)
			printf(",%d",a[i]);
}