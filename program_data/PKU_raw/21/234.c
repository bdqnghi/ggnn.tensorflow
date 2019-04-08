int n,i,a[400],j=0,m;
void main()
{
	float s=0,d=0,b[400],x;
	int c[400]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	s=s/n;	
	for(i=0;i<n;i++)
	{
		if(a[i]>=s)	b[i]=a[i]-s;
		else	b[i]=s-a[i];
	}
	for(i=0;i<n;i++)
		if(b[i]>d)	d=b[i];
	for(i=0;i<n;i++)
	{	
		if(b[i]>d)	x=b[i]-d;
		else x=d-b[i];
		if(x<1e-6)	
		{
			if(a[i]<c[j])	
			{
				c[j+1]=c[j];
				c[j++]=a[i];
			}
			else	c[j++]=a[i];
		}
	}
	printf("%d",c[0]);
	for(i=1;i<j;i++)
		printf(",%d",c[i]);

}
