//????
int main()
{
	double a[100][2],max=0.0,dis;
	int n,i,j;
	cin>>n;
	for (i=0;i<n;i++)//????
	{
		cin>>a[i][0]>>a[i][1];
	}
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			dis=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]));//????
			if (dis>max)
				max=dis;
		}
	}
	cout<<fixed<<setprecision(4)<<max<<endl;
	return 0;
}	