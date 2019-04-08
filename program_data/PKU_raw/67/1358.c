int main()
{
	int n,arr[100][2],i,a,b;
	double x,y;
	cin>>n;
	cin>>a>>b;
	x=b*100.0/a;
	for(i=0;i<n-1;i++)
	{
		cin>>arr[i][0]>>arr[i][1];
		y=arr[i][1]*100.0/arr[i][0];
		if(y-x>5)
		{
			cout<<"better"<<'\n';
		}
		else if(x-y>5)
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