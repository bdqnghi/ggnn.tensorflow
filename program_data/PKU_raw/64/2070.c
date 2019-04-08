int main()
{
int n,i,j,a[10000],b[10000],m,x[100],y[100],z[100];
float dis[10000],t;
cin>>n;
for (i=1; i<=n; i++)
	cin>>x[i]>>y[i]>>z[i];
int cnt=0;
for (i=1; i<=n; i++)
	for (j=i+1; j<=n; j++)
	{
		dis[cnt]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
		a[cnt]=i;
		b[cnt]=j;
		cnt=cnt+1;
	}


for (i=0; i<cnt-1; i++)
	for(j=0; j<cnt-1-i; j++)
		if(dis[j]<dis[j+1]){
			t=dis[j];
			dis[j]=dis[j+1];
			dis[j+1]=t;
			m=a[j];
			a[j]=a[j+1];
			a[j+1]=m;
			m=b[j];
			b[j]=b[j+1];
			b[j+1]=m;
		}
for(i=0; i<cnt; i++)
    cout<<fixed<<setprecision(2)<<"("<<x[a[i]]<<","<<y[a[i]]<<","<<z[a[i]]<<")-("<<x[b[i]]<<","<<y[b[i]]<<","<<z[b[i]]<<")="<<dis[i]<<endl;
return 0;
}