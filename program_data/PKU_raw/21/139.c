void main()
{
	int i,j,a[300],n,t;
	float d,s=0,b,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		s=s+a[i];
	d=s/n;
	for(j=0;j<n-1;j++)
		for(i=0;i<n-1-j;i++)
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
			b=d-a[0];
			c=a[n-1]-d;
			if(b<c)
				printf("%d\n",a[n-1]);
			else if(b>c)
				printf("%d\n",a[0]);
			else
				printf("%d,%d\n",a[0],a[n-1]);
}