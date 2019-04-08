int main()
{
	int n,x[100],i,max,max2;
	cin>>n;
	max=0;max2=0;
	for(i=0;i<n;i++)
		cin>>x[i];
	for(i=0;i<n;i++)
		if(x[i]>max)
			max=x[i];
	for(i=0;i<n;i++)
		if(x[i]>max2)
			if(x[i]!=max)
			max2=x[i];
	
		cout<<max<<endl<<max2<<endl;
		return 0;
}
