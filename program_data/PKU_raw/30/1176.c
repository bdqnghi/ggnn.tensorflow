int main()
{ 
	int i,n,sum=0,mod,judge;
	cin>>n;
	for(n;n>0;n--)
	{
		if(n%7==0||n%10==7||(n/10)==7)
		   continue;	
		sum+=n*n;
	}
	cout<<sum<<endl;
	return 0;
}