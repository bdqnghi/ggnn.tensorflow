int main()//???
{
	int n,k,shu[1000],m;//????
	cin>>n>>k;//??n k
	cout<<endl;
	for(int i=1;i<n;i++)//????
		cin>>shu[i];
	for(int i=1;i<n;i++)//???i??
		for(int j=i+1;j<=n;j++)//??i????
		{
			m=shu[i]+shu[j];//??
			if(m==k)
				{
					cout<<"yes";
					j=n+1;//????
					i=n+1;
			     }
			else if(i==n-1&&j==n)
				cout<<"no";
         }
		return 0;
}