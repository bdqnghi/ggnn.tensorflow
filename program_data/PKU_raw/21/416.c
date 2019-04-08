void main()
{
	int n,a[300],i,j=0,v[2];
	double p,u,w;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		j=j+a[i];
	}
	p=(float)j/(float)n;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			v[0]=i;
			v[1]=i;
			if((float)a[i]>=p)
				u=(float)a[i]-p;
			else
				u=p-(float)a[i];
		}
		else
		{
			if((float)a[i]>=p)
				w=(float)a[i]-p;
			else
				w=p-(float)a[i];
			if(w>u)
			{
				v[0]=i;
				v[1]=i;
				u=w;
			}
			else if(w==u)
			{
				v[1]=i;
			}
		}
	}
	if(a[v[0]]==a[v[1]])
		printf("%d",a[v[0]]);
	else
		printf("%d,%d",a[v[0]],a[v[1]]);
}

			
			


