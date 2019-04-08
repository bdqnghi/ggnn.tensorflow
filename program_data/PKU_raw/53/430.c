void main()
{
	int a[100],n,i,j,m=0,k,x,b[100];

	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
for(i=0;i<n;i++)
b[i]=a[i];
for(j=0;j<n;j++)
		for(i=j+1;i<n;i++)
			if(b[j]==b[i])
			{
				m++;
				b[i]=12345+i;
			}
	for(x=0;x<5;x++)
	{
	for(j=0;j<n;j++)
		for(i=j+1;i<n;i++)
			if(a[j]==a[i])
			{
				for(k=i;k<n-1;k++)
					a[k]=a[k+1];
				
			}
	}
	for(i=0;i<n-m-1;i++)
		printf("%d,",a[i]);
	printf("%d",a[n-m-1]);

}