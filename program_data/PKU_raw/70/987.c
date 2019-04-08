int main()
{
	int n,sum=0,i,j;
	double points[2][100]={0},dis[200]={0},max=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>points[0][i]>>points[1][i];
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			dis[sum++]=sqrt(pow(points[0][i]-points[0][j],2.0)+pow(points[1][i]-points[1][j],2.0));
	for(i=0;i<sum;i++)
		if(dis[i]>max)
			max=dis[i];
	printf("%.4f\n",max);
	return 0;
}