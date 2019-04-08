int main()
{
	int i,j,k,l,n,m,a[10],b[10],c[10],z[50],x[50],v[50],s[50],d[50],f[50],q,w,r,t,o,u;
	double y[50],jl[50],e;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
	}
	m=n*(n-1)/2;
	k=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			y[k]=1.0*((a[j]-a[i])*(a[j]-a[i])+(b[j]-b[i])*(b[j]-b[i])+(c[j]-c[i])*(c[j]-c[i]));
			jl[k]=sqrt(y[k]);
			z[k]=a[i];
			x[k]=b[i];
			v[k]=c[i];
			s[k]=a[j];
			d[k]=b[j];
			f[k]=c[j];
			k++;
		}
	}

for(l=1;l<=m;l++)
{
	for(i=0;i<m-l;i++)
	{
		if(jl[i]<jl[i+1])
		{
			e=jl[i];
			jl[i]=jl[i+1];
			jl[i+1]=e;
			q=z[i];
			z[i]=z[i+1];
			z[i+1]=q;
			w=x[i];
			x[i]=x[i+1];
			x[i+1]=w;
			r=v[i];
			v[i]=v[i+1];
			v[i+1]=r;
			t=s[i];
			s[i]=s[i+1];
			s[i+1]=t;
			o=d[i];
			d[i]=d[i+1];
			d[i+1]=o;
			u=f[i];
			f[i]=f[i+1];
			f[i+1]=u;


		}
	}
}
for(i=0;i<m;i++)
{
	printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",z[i],x[i],v[i],s[i],d[i],f[i],jl[i]);
}
return 0;
}