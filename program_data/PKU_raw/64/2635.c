void main()
{
	int n,i,j,k,y,z;
	int a[10],b[10],c[10],p[45],q[45];
	float m[45],x,t;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
	k=0;
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			x=(a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])+(c[i]-c[j])*(c[i]-c[j]);
			p[k]=i;
			q[k]=j;
			m[k]=sqrt(x);
			k++;
		}
	}
	for (i=k-1;i>=0;i--)
	{
		for (j=k-1;j>=k-i-1;j--)
		{
			if (m[j+1]>m[j])
			{
				t=m[j];
				m[j]=m[j+1];
				m[j+1]=t;
				y=p[j];
				p[j]=p[j+1];
				p[j+1]=y;
				z=q[j];
				q[j]=q[j+1];
				q[j+1]=z;
			}
		}
	}
	for (i=0;i<k;i++)
	{
		y=p[i];
		z=q[i];
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",a[y],b[y],c[y],a[z],b[z],c[z],m[i]);
	}
}
