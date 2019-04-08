int main()
{
	int n,m=0;
	int i=0,j=0;
	int a=0,b=0;
	double i1=0;
	int i2=0,i3=0,i4=0,i5=0;
	double x[10],y[10],z[10],distance[100];
	int p[100],q[100],p1[100],q1[100];
	cin>>n;
	for(m=0;m<n;m++)
		cin>>x[m]>>y[m]>>z[m];
	for(i=0;i<100;i++)
	{
		p[i]=0;
		q[i]=0;
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
			{
				distance[b]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
			    p[b]=i;
			    q[b]=j;
			    //cout<<p[b]<<q[b];
			    b++;
		}
	}
	i4=0;
	i5=0;
	for(i4=0;i4<n*(n-1)/2-1;i4++)
	{
		for(i5=i4+1;i5<n*(n-1)/2;i5++)
		{
			if(distance[i5]>distance[i4])
			{
				i1=distance[i4];
				distance[i4]=distance[i5];
				distance[i5]=i1;
				i2=p[i4];
				p[i4]=p[i5];
				p[i5]=i2;
				i3=q[i4];
				q[i4]=q[i5];
				q[i5]=i3;
}
				
		}
	}
	i=0;
	for(i=0;i<n*(n-1)/2;i++)
	{
		if(distance[i]==distance[i+1])
		{
			if(p[i]>p[i+1])
			{
				i2=p[i+1];
				p[i+1]=p[i];
				p[i]=i2;
				i3=q[i+1];
				q[i+1]=q[i];
				q[i]=i3;
			}
			if(p[i]==p[i+1]&&q[i]>q[i+1])
			{
				i2=p[i+1];
				p[i+1]=p[i];
				p[i]=i2;
				i3=q[i+1];
				q[i+1]=q[i];
				q[i]=i3;
			}
		}
	}
	for(i=0;i<n*(n-1)/2;i++)
	{
		cout<<"("<<x[p[i]]<<","<<y[p[i]]<<","<<z[p[i]]<<")"<<"-("<<x[q[i]]<<","<<y[q[i]]<<","<<z[q[i]]<<")=";
		printf("%.2lf\n",distance[i]);
	}
	return 0;
}
