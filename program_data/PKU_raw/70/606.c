void main()
{
	int n,i,j;
	double y[100][99],k,x[100][2];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf %lf",&x[i][0],&x[i][1]);
    for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
             y[i][j]=sqrt((x[j][0]-x[i][0])*(x[j][0]-x[i][0])+(x[j][1]-x[i][1])*(x[j][1]-x[i][1]));
		}
    for(i=0;i<n-2;i++)
		for(j=i+1;j<n-1;j++)
		{
             if(y[i][j]>y[i][j+1])
			 {
				k=y[i][j];
				y[i][j]=y[i][j+1];
				y[i][j+1]=k;
			 }
		}
		for(i=0;i<n-1;i++)
		{
			if(y[i][n-1]>y[i+1][n-1])
			{
            	k=y[i][n-1];
				y[i][n-1]=y[i+1][n-1];
				y[i+1][n-1]=k;
			}
		}
		printf("%.4lf\n",y[n-1][n-1]);
}