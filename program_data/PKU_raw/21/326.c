void main()
{
	int n,s=0,i,j;
	int a[300];
	double b[300]={0},c[300];
	double ave,t,p,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		s=s+a[i];
	ave=(double)s/n;
	for(i=0;i<n;i++)
	{
		if(a[i]>ave)
		{
			b[i]=a[i]-ave;
			c[i]=ave-a[i];
		}
		
		else
		{
			b[i]=ave-a[i];
			c[i]=b[i];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(b[j]<b[j+1])
			{
				t=b[j];
				p=c[j];
				b[j]=b[j+1];
				c[j]=c[j+1];
				b[j+1]=t;
				c[j+1]=p;
			}
		}
	}
	if(c[0]>0)
		k=ave-b[0];
	else
		k=ave+b[0];
	printf("%.0f",k);
		i=1;
		while(b[i]==b[0])
		{
			if(c[i]>0)
		      k=ave-b[i];
	        else
		      k=ave+b[i];
			printf(",%.0f",k);
			i++;
		}

}