void main()
{
	int n,i,j,k[100],sum=0,t,q;
	float a,p[100],t1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&k[i]);
		sum+=k[i];
	}
	a=(float)sum/(float)n;
	for(j=1;j<n;j++)
	{
		for(i=0;i<n-j;i++)
		{
			if(k[i]>k[i+1])
			{
				t=k[i];
				k[i]=k[i+1];
				k[i+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		p[i]=a-k[i];
		if(p[i]<0)p[i]=-p[i];
	}
	for(i=0;i<n;i++)
	{
		q=0;
		if(p[i]>p[q])
		{
			q=i;
		}
		
	}
	printf("%d",k[q]);
	t1=p[q];
	p[q]=0;
	for(i=0;i<n;i++)
	{
		if(fabs(p[i]-t1)<=0.0000001)printf(",%d",k[i]);
	}


}