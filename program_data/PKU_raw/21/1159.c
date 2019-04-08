void main()
{
	int n,i,j,k,t=0;
	float ave=0.0,a[300],b[300],max=0.0,p=0.0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		ave=ave+a[i];
		
		
	}
	ave=ave/n;
	for(i=0;i<n;i++)
	{
		b[i]=a[i]-ave;
		if(b[i]<0)
			b[i]=-b[i];
	//	printf("%f\n",b[i]);
	}
	max=b[0];
	for(i=0;i<n;i++)
	{
		if(b[i]>max)
			max=b[i];
	}
	k=0;
	for(i=0;i<n;i++)
	{
		if(b[i]==max)
			k=k+1;
	}
	if(k==1)
	{
		for(i=0;i<n;i++)
		{
			if(b[i]==max)
				printf("%d",(int)a[i]);
		}
	}
	else
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(a[i]>a[i+1])
				{
					p=a[i];
					a[i]=a[i+1];
					a[i+1]=p;
				}
			}
		}
		t=0;
    	for(i=0;i<n;i++)
		{
			if(b[i]==max)
			{
				t=t+1;
				if(t==1)
					printf("%d",(int)a[i]);
				else
					printf(",%d",(int)a[i]);
			}
		}
	}
}

