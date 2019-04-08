void main()
{
	int n,i,j,t,l=0;
	int x[20],y[20],z[20],d1[100],d2[100];
	float d[100],temp;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
	for (i=1;i<n;i++)
		for (j=i+1;j<=n;j++)
		{
			l++;
			d[l]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
			d1[l]=i;d2[l]=j;
		}
	for (i=1;i<n*(n-1)/2;i++)
		for (j=1;j<n*(n-1)/2;j++)
			if (d[j]<d[j+1])
				{temp=d[j];d[j]=d[j+1];d[j+1]=temp;
				t=d1[j];d1[j]=d1[j+1];d1[j+1]=t;
				t=d2[j];d2[j]=d2[j+1];d2[j+1]=t;}
	for (i=1;i<=n*(n-1)/2;i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",x[d1[i]],y[d1[i]],z[d1[i]],x[d2[i]],y[d2[i]],z[d2[i]],d[i]);
}