int main()
{
	int i,n,j=1,x[11],y[11],z[11],a,b,k;
	double d[50],t;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>x[i]>>y[i]>>z[i];
	for(i=1;i<n;i++)
		for(k=i+1;k<=n;k++)
	{
		d[j]=sqrt(pow(x[i]-x[k],2.0)+pow(y[i]-y[k],2.0)+pow(z[i]-z[k],2.0));
		j++;
	}
	for(j=1;j<=(n*(n-1)/2-1);j++)
		for(i=1;i<=(n*(n-1)/2-j);i++)
			if (d[i]<d[i+1])
			{t=d[i];d[i]=d[i+1];d[i+1]=t;}
	for(i=1;i<=(n*(n-1)/2);i++)
	{
		if(d[i]==d[i+1])
			continue;
		for(a=1;a<n;a++)
			for(b=a+1;b<=n;b++)
				if(sqrt(pow(x[a]-x[b],2.0)+pow(y[a]-y[b],2.0)+pow(z[a]-z[b],2.0))==d[i])
					printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",x[a],y[a],z[a],x[b],y[b],z[b],d[i]);
	}
	return 0;
}