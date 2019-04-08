int main()
{
	float x[100],y[100];
	int n,i,j;
	double dis[100][100],Dis;

	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%f%f",&x[i],&y[i]);
    
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n-1;j++)
	dis[i][j]=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
	}

    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	if(dis[0][0]<=dis[i][j])dis[0][0]=dis[i][j];
    }

    Dis=sqrt(dis[0][0]);

	printf("%.4f",Dis);

	return 0;
}

