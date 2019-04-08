int main()
{
	int n,i=0,j=0,k=0;;
	double x[10],y[10],z[10],d[100],t,s,c[10][10]={0};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i]>>z[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			d[k]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
			k++;
		}
	}
	for(int k=0;k<(n*(n-1)/2)-1;k++)
	{
	for(int l=0;l<(n*(n-1)/2)-1;l++)
	{
		if(d[l]<d[l+1])
		{
			t=d[l+1];
			d[l+1]=d[l];
			d[l]=t;
		}
	}
	}
	for(int k=0;k<(n*(n-1)/2);k++)
	{
		s=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(d[k]==sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]))&&s==0&&c[i][j]==0)
			{
				cout<<"("<<fixed<<setprecision(0)<<x[i]<<","<<fixed<<setprecision(0)<<y[i]<<","<<fixed<<setprecision(0)<<z[i]<<")-("<<fixed<<setprecision(0)<<x[j]<<","<<fixed<<setprecision(0)<<y[j]<<","<<fixed<<setprecision(0)<<z[j]<<")="<<fixed<<setprecision(2)<<d[k]<<endl;
				s+=1;
				c[i][j]+=1;
			}
		}
	}
	}
	return 0;
}