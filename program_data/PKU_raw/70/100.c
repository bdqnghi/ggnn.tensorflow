int main()
{
	double a[100][2];
	int n;
	cin>>n;
	for(int i=0;i<=n-1;i++)
		for(int j=0;j<=1;j++)
			cin>>a[i][j];

	double z=0;
	for(int k=0;k<=n-2;k++)
	for(int l=k+1;l<=n-1;l++)
	{
		double s=sqrt(pow((a[k][0]-a[l][0]),2)+pow((a[k][1]-a[l][1]),2));
			if(z<s)
				z=s;
	}
	printf("%.4lf\n",z);
	return 0;
}