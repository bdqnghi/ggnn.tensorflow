int main()
{
	double x[100]={0};
	double y[100]={0};
	int i,j,n;
	double dis[100][100]={0};
	cin >> n;
	double maxdis=0;
	for(i=1;i<=n;i++)
	{
		cin >> x[i] >> y[i];
	}
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
	    {
	    	dis[i][j]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
			if(dis[i][j]>maxdis)
				maxdis=dis[i][j];
     	}
		printf("%.4f\n",maxdis);
		return 0;
}