main()
{
	int i,j,k,l,n,m,a[301],s;
	for(;scanf("%d %d",&n,&m)!=EOF;)
	{
		if(n!=0)
		{
			for(l=1;l<=300;l++)
		        a[l]=l;
			for(j=1;j<n;j++)
			{
				for(s=0;s==0;)
				{
					for(i=1;i<=n;i++)
					{
					if(a[i]==m) {a[i]=0;s++;break;}
					}
					if(s==0)
					{
						for(k=1;k<=n;k++)
						{
							if(a[k]!=0) a[k]=a[k]+n-j+1;
						}
					}		
				}//zhao a[i]!=0
				for(k=i+1,s=0;k<=n;k++)
				{
					if(a[k]!=0)
						a[k]=++s;
				}
				for(k=1;k<i;k++)
				{
					if(a[k]!=0)
					    a[k]=++s;
				}
			}
			for(j=1;j<=n;j++)
			{
				if(a[j]!=0) printf("%d\n",j);
			}
		}
	}
}