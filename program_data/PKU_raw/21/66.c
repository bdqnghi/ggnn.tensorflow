int m=0;
void main()
{
	int n,a[300],i,j,k,d[100]={-1};
	float f,sum=0;
	double b[300],c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		sum=sum+a[i];
	f=sum/n;
	for(i=0;i<n;i++)
		b[i]=fabs(a[i]-f);
	c=b[0];
	for(i=0;i<n;i++)
		if(b[i]>c)
			c=b[i];
	for(i=0;i<n;i++)
		if(c==b[i])
		{
			d[m]=a[i];m++;
		}
	if(d[1]==-1)
		printf("%d\n",d[0]);
	else
	{
		for(i=0;i<m-1;i++)
			printf("%d,",d[i]);
		printf("%d\n",d[m-1]);
	}
}

