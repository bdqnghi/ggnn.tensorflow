int main()
{
	int n,m,i,j,k=0;
	int q,w;
	int a[10000][4],c[10000],d[10000];
	double b[10000],e;
	scanf("%d",&n);
	m=n*(n-1)/2;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i][0]);
		scanf("%d",&a[i][1]);
		scanf("%d",&a[i][2]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			b[k]=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2]));
			c[k]=i;
			d[k]=j;
			k++;
		}
	}
	for(j=1;j<m;j++)
	{
		for(i=0;i<m-j;i++)
		{
			if(b[i+1]>b[i])
			{
				e=b[i];b[i]=b[i+1];b[i+1]=e;
			    q=c[i];c[i]=c[i+1];c[i+1]=q;
			    w=d[i];d[i]=d[i+1];d[i+1]=w;
			}
		}
	}
	for(i=0;i<m;i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[c[i]][0],a[c[i]][1],a[c[i]][2],a[d[i]][0],a[d[i]][1],a[d[i]][2],b[i]);
	return 0;
}