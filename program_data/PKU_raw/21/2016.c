void main()
{
	int n,a[100],i,j,o,k=0,c[100];
	float sum=0,b[100],t,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	t=sum/n;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				o=a[j];
			a[j]=a[j+1];
			a[j+1]=o;
			}
		}
	for(i=0;i<n;i++)
	b[i]=fabs(a[i]-t);
	m=b[0];
	for(i=0;i<n;i++)
	if(b[i]>m)
		m=b[i];
	for(i=0;i<n;i++)
		if(b[i]==m)
		{
			c[k]=a[i];
			k++;
		}
		for(i=0;i<k-1;i++)
			printf("%d,",c[i]);
		printf("%d",c[k-1]);
}