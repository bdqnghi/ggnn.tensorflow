void main()
{	
	int m,n,s,x,a[301],i;
    for(i=1;i<=300;i++) a[i]=i;
	x=1;
    scanf("%d %d",&n,&m);
		while(n!=0||m!=0)
	{
        
		if(n==0||m==0) break;
		s=n;
        for(i=1;i<=300;i++) a[i]=i;
		x=1;
		while(s>1)
		{
			for(i=1;i<m;i++)
			{
				x++;
				if(x>n) x=x-n;
				while(a[x]==0)
				{
					x++;
					if(x>n) x=x-n;
				}
			}
			a[x]=0;
			s=s-1;
			x=x+1;
			if(x>n) x=x-n;
			while(a[x]==0)
			{
				x=x+1;
				if(x>n) x=x-n;
			}
		}
		printf("%d\n",x);
        scanf("%d %d",&n,&m);
	}
}
