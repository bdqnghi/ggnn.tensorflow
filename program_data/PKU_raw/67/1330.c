int main()
{
	int n,i,j;
		double a[100][2],perc[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		cin>>a[i][j];
		perc[i]=a[i][1]/a[i][0];
	//	cout<<perc[i];
	}

	for(i=1;i<n;i++)
	{
		if((perc[i]-perc[0])>0.05)
			cout<<"better"<<endl;
		else if((perc[0]-perc[i])>0.05)
			cout<<"worse"<<endl;
		else 
			cout<<"same"<<endl;
	}
	return 0;
}