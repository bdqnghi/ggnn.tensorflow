
int max(int x,int y)
{
	if(x>=y)
		return x;
	else
		return y;
}
int main()
{
	int n,a[1000],maxtemp,maxtemp2;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	maxtemp=maxtemp2=a[0];
	for(int i=0;i<n;i++)
	    maxtemp=max(maxtemp,a[i]);
	for(int i=0;i<n;i++)
		if(a[i]==maxtemp)
			a[i]=-1000000000;
	for(int i=0;i<n;i++)
		maxtemp2=max(maxtemp2,a[i]);
	cout<<maxtemp<<"\n"<<maxtemp2<<endl;	

	return 0;
}