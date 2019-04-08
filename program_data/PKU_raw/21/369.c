void main()
{
	float b[300],p=0,t;int i,j=0,n,max=0,a[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
 
 for(j=0;j<n-1;j++)
				for(i=0;i<n-j-1;i++)
					if(a[i]>a[i+1])
					{
						t=a[i];
						a[i]=a[i+1];
						a[i+1]=t;
					}
	for(i=0;i<n;i++)
		p=p+a[i];
	p=p/n;
	for(i=0;i<n;i++)
	{
		if(a[i]-p>=0)
			b[i]=a[i]-p;
		else b[i]=p-a[i];
	}
	for(i=1;i<n;i++)
		if(b[i]>b[max])
		{
			t=max;
			max=i;
			i=t;
		}
		for(i=0;i<n;i++)
			if(b[i]<b[max])
				a[i]=-1;
		for(i=0;i<n;i++)
		if(a[i]>=0)
		{
			printf("%d",a[i]);
			for(j=i+1;j<n;j++)
				if(a[j]>=0)
					printf(",%d",a[j]);break;
		}
}