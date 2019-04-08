void main()
{
	int n,a[1001],b[1001],i,j,win,draw,lose,t,k,p,max;
	scanf("%d",&n);
	while(n!=0)
	{
		win=0;draw=0;lose=0;
		max=-9999;
		for(i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(i=1;i<=n;i++)
			scanf("%d",&b[i]);
		for(i=1;i<=n-1;i++) 
			for(j=1;j<=n-i;j++)
			{
				if(a[j]<a[j+1]) 
		         {t=a[j];a[j]=a[j+1];a[j+1]=t;}
				if(b[j]<b[j+1]) 
				{t=b[j];b[j]=b[j+1];b[j+1]=t;}
			}
	for(i=0;i<=n-1;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j+i>n) k=j+i-n;else k=j+i;
			if (a[k]>b[j]) win=win+1;
			else if(a[k]==b[j]) draw=draw+1;
			else lose=lose+1;
		}
		p=200*(win-lose);
		if(p>max) max=p;
		win=0;draw=0;lose=0;
	}
        printf("%d\n",max);
		scanf("%d",&n);
	}
}

