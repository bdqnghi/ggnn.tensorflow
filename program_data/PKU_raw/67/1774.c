int main()
{
	int n,i,j;
	double a[100][2],t;
	double b[100];
	cin>>n;
	t=5.0/100.0;
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=1;j++)
		{
			cin>>a[i][j];
		}
		b[i]=a[i][1]/a[i][0];
	}
	for(i=1;i<=n-1;i++)
	{
		if((b[i]-b[0])>t)
		{
			cout<<"better"<<'\n';
		}
		else if(b[0]-b[i]>t)
		{
			cout<<"worse"<<'\n';
		}
		else
		{
			cout<<"same"<<'\n';
		}
	}
	return 0;
}
