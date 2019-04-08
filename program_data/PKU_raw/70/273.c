int main(int argc, char* argv[])
{
	int n,i,j;
    double x[100],y[100],z[100][100],max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
     scanf("%lf %lf",&x[i],&y[i]);
	}
	for(i=0;i<n;i++)
	{
    for(j=i+1;j<n;j++)
	{
	 z[i][j]=sqrt((x[j]-x[i])*(x[j]-x[i])+(y[j]-y[i])*(y[j]-y[i]));
	}
	}
	max=z[0][1];
	for(i=0;i<n-1;i++)
	{
       for(j=i+1;j<n;j++)
	   {
		if(z[i][j+1]>max)
		max=z[i][j+1];
	   }
	}
	printf("%.4lf\n",max);
	return 0;
}

