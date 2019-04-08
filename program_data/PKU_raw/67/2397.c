int main()
{
	int n,i;
	float a[10000]={0},lin;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>lin>>a[i];
		a[i]=a[i]/lin;
	}
	for(i=1;i<n;i++)
	{
		if((a[i]-a[0])>0.04999999)
			cout<<"better"<<endl;
		else if((a[0]-a[i])>0.04999999)
			cout<<"worse"<<endl;
		else
			cout<<"same"<<endl;
	}
	return 0;
}