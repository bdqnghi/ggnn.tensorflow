int main()
{
	int i,n,k=0,j;
	cin>>n;
    double x[100],y[100],d[1000],dis=0;
	for(i=0;i<=999;i++) d[i]=0;
	for(i=0;i<n;i++)
    {
		cin>>x[i]>>y[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{ d[k]=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
		k=k+1;
		}
	}
	for(k=0;k<1000;k++)
	{
       if (d[k]>dis)
		   dis=d[k];
	}
          printf("%.4f\n", dis);
		return 0;
}
	