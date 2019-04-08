int main()
{
	int n;
	cin>>n;
	double a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int j=0;j<n;j++)
	{
		a[j]=b[j]/a[j];
	}
	for(int k=1;k<n;k++)
	{
		if((a[k]-a[0])>0.05)
			cout<<"better"<<endl;
		if((a[k]-a[0])<-0.05)
			cout<<"worse"<<endl;
		if(abs(a[k]-a[0])<=0.05)
			cout<<"same"<<endl;
	}
	return 0;
}

