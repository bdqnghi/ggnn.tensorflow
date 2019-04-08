int main()	
{
	double a[10000],b[10000],c[10000],d[10000][2];
	int i,j,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
		if(a[i]<0)
		{
			a[i]=-a[i],b[i]=-b[i],c[i]=-c[i];
			if(b[i]*b[i]-4*a[i]*c[i]>=0)
			{
				d[i][0]=(-b[i])/(2*a[i]);
				d[i][1]=(sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
			}
			if(b[i]*b[i]-4*a[i]*c[i]<0)
			{
				d[i][0]=(-b[i])/(2*a[i]);
				d[i][1]=(sqrt(-b[i]*b[i]+4*a[i]*c[i]))/(2*a[i]);
			}
		}
		if(a[i]>0)
		{
			if(b[i]*b[i]-4*a[i]*c[i]>=0)
			{
				d[i][0]=(-b[i])/(2*a[i]);
				d[i][1]=(sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
			}
			if(b[i]*b[i]-4*a[i]*c[i]<0)
			{
				d[i][0]=(-b[i])/(2*a[i]);
				d[i][1]=(sqrt(-b[i]*b[i]+4*a[i]*c[i]))/(2*a[i]);
			}
		}
	}
	for(j=1;j<=n;j++)
	{
		if(b[j]*b[j]-4*a[j]*c[j]>0)
			cout<<fixed<<setprecision(5)<<"x1="<<d[j][0]+d[j][1]<<";x2="<<d[j][0]-d[j][1]<<endl;
		if(b[j]*b[j]-4*a[j]*c[j]==0)
			cout<<fixed<<setprecision(5)<<"x1=x2="<<d[j][0]<<endl;
		if(b[j]*b[j]-4*a[j]*c[j]<0)
			cout<<fixed<<setprecision(5)<<"x1="<<d[j][0]<<"+"<<d[j][1]<<"i;x2="<<d[j][0]<<"-"<<d[j][1]<<"i"<<endl;
	}
	return 0;
}