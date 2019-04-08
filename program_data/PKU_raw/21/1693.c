void main()
{
	int n,i,a[300],c[300],j,p=1,t;
	float ave,x=0,b[300],m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	x=x+a[i];
	b[i]=0;c[i]=0;
	}
	ave=x/n;
	for(i=0;i<n;i++)
	{
		if(ave>=a[i])
		b[i]=ave-a[i];
		else b[i]=a[i]-ave;
		if(i>0)
		{
			if(b[i]>m)
			{
			m=b[i];
			for(j=0;j<p;j++)
				c[j]=0;
			c[0]=a[i];
			p=1;
			}
			else
			{
			if(b[i]==m)
			{
				c[p]=a[i];
				p=p+1;
			}
			}
		}
		else 
		{
			m=b[0];
			c[0]=a[0];
		}

	}
	for(j=0;j<p;j++)
		for(i=0;i<p-1-j;i++)
			if(c[i]>c[i+1])
			{
				t=c[i];
				c[i]=c[i+1];
				c[i+1]=t;
			}
			printf("%d",c[0]);
			for(i=1;i<p;i++)
	printf(",%d",c[i]);
}