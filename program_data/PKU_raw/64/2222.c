int main()
{
	int n,m,i,j,x,y,t=0;
	cin>>n;
	int a[10],b[10],c[10],e[100];
	double d[100];
	for(i=0;i<n;i++)
		cin>>a[i]>>b[i]>>c[i];
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{e[t]=10*i+j;
		d[e[t]]=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])+(c[i]-c[j])*(c[i]-c[j]));
		t++;
		}
	for(i=1;i<t;i++)
		for(j=0;j<t-i;j++)
		{if(d[e[j]]<d[e[j+1]])
		{
		m=e[j];
		e[j]=e[j+1];
		e[j+1]=m;
		}}
	for(i=0;i<t;i++)
	{x=e[i]%10;
	y=(e[i]-x)/10;
	cout<<"("<<a[y]<<","<<b[y]<<","<<c[y]<<")-("<<a[x]<<","<<b[x]<<","<<c[x]<<")="<<fixed<<setprecision(2)<<d[e[i]]<<endl;
	}
	return 0;
}