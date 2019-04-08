int main (){
	int n;
	cin>>n;
	int x[10],y[10],z[10];
	int i,j;
	for(i=0;i<=n-1;i++)
		cin>>x[i]>>y[i]>>z[i];
	float d[45];
	int s[45],e[45];
	int t=0;
	for(i=0;i<=n-2;i++)
		for(j=i+1;j<=n-1;j++)
		{
			d[t]=sqrt((x[i]-x[j])*(x[i]-x[j])+
					  (y[i]-y[j])*(y[i]-y[j])+
					  (z[i]-z[j])*(z[i]-z[j]));
			s[t]=i,e[t]=j;
			t++;
		}
	float tempd;
	int temp;
	for(i=0;i<=t-2;i++)
		for(j=t-1;j>=i+1;j--)
			if(d[j]>d[j-1])
			{
				tempd=d[j];d[j]=d[j-1];d[j-1]=tempd;
				temp=s[j];s[j]=s[j-1];s[j-1]=temp;
				temp=e[j];e[j]=e[j-1];e[j-1]=temp;
			}
	cout<<fixed<<setprecision(2);
	for(i=0;i<=t-1;i++)
		cout<<"("<<x[s[i]]<<","<<y[s[i]]<<","<<z[s[i]]<<")-("<<x[e[i]]<<","<<y[e[i]]<<","<<z[e[i]]<<")="<<d[i]<<endl;
}