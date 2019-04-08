int q[100],w[100],m,n,i,j,k,v,y=0;
void a(),b(),c(),d();
main()
{
	a();
	b();
	c();
	d();
}
void a()
{
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
		scanf("%d",&q[i]);
	for(i=0;i<n;i++)
		scanf("%d",&w[i]);
}
void b()
{
	for(j=0;j<m-1;j++)
	{
		for(k=j+1;k<m;k++)
		{
			if(q[j]>q[k])
			{
				v=q[k];
				q[k]=q[j];
				q[j]=v;
			}
		}
	}
    for(j=0;j<n-1;j++)
	{
		for(k=j+1;k<n;k++)
		{
			if(w[j]>w[k])
			{
				v=w[k];
				w[k]=w[j];
				w[j]=v;
			}
		}
	}
}
void c()
{
	for(i=m;i<m+n;i++)
		q[i]=w[y++];
}
void d()
{
	printf("%d",q[0]);
	for(i=1;i<m+n;i++)
		printf(" %d",q[i]);
}