int main()
{
	int n ;
	cin>>n ;
	for(int i = 0;i<n;i++)
	{
		int m,a[20];
		cin>>m;
		if(m==0)
			cout<<"60"<<endl;
		else if(m!=0)
		{
		for(int k = 0 ; k<m ; k++)
		{
			cin>>a[k];
		}
		for(int j=m ; j>=1 ; j--)
		{
			if((a[j-1]+3*j)>=63)
				continue ;
			else if((a[j-1]+3*j)<=60)
			{
				cout<<(60-3*j)<<endl;
				break;
			}
			else 
			{
				cout<<a[j-1]<<endl;
				break;
			}
		 }
		}
	}
	return 0 ;
}