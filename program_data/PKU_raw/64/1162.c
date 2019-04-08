int main()
{
	int n,l=0,a[101],i,j,b[101],c[101],f[50],g[50],x;
	double e[50],y;
	for(i=0;i<50;i++){e[i]=0;}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
	}
	for(j=0;j<n-1;j++)
	{
		for(i=j+1;i<n;i++)
		{
			e[l]=sqrt((a[j]-a[i])*(a[j]-a[i])+(b[j]-b[i])*(b[j]-b[i])+(c[j]-c[i])*(c[j]-c[i]));
			f[l]=j;
			g[l]=i;
			l++;
		}
	}
	for(l=0;l<(n*(n-1))/2;l++)
	{
		for(i=0;i<(n*(n-1)/2-1);i++)
		{
			if(e[i]<e[i+1])
			{
				y=e[i];
				e[i]=e[i+1];
				e[i+1]=y;
				x=f[i];
				f[i]=f[i+1];
				f[i+1]=x;
				x=g[i];
				g[i]=g[i+1];
				g[i+1]=x;
			}
		}
	}
	for(l=0;l<n*(n-1)/2;l++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[f[l]],b[f[l]],c[f[l]],a[g[l]],b[g[l]],c[g[l]],e[l]);
	}
   return 0;
}
