int main()
{
    int n,a[200],b[200],c[200],i,j,h[200],l[200],t=1,q,z;
    double d[200],k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
		cin>>a[i]>>b[i]>>c[i];
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			d[t]=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])+(c[i]-c[j])*(c[i]-c[j]));
			h[t]=i;
			l[t]=j;
			t++;
		}
	}
	for(i=1;i<=n*(n-1)/2-1;i++)
	{
		for(j=1;j<=n*(n-1)/2-i;j++)
		{
			if(d[j]<d[j+1])
			{
				k=d[j];
				d[j]=d[j+1];
				d[j+1]=k;
				z=h[j];
				h[j]=h[j+1];
				h[j+1]=z;
				z=l[j];
				l[j]=l[j+1];
				l[j+1]=z;
				
			}
		}
	}
	for(i=1;i<=n*(n-1)/2;i++)
	{
		cout<<"("<<a[h[i]]<<","<<b[h[i]]<<","<<c[h[i]]<<")-("<<a[l[i]]<<","<<b[l[i]]<<","<<c[l[i]]<<")=";
		printf("%.2f\n",d[i]);
	}
	cin>>q;
	return 0;
}
