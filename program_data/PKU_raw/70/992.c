int main()
{
	int n;
	float num[100][2];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>num[i][0]>>num[i][1];
    double max=0.0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			double l=0.0;
			l+=pow((num[i][0]-num[j][0]),2);
			l+=pow((num[i][1]-num[j][1]),2);
			l=sqrt(l);
			if(l>max) max=l;
		}
	}
	cout<<fixed<<setprecision(4)<<max;
	return 0;
}