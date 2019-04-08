int main()
{
	int n,i,j,k,g=0;
	int a[10000]={0};
	cin>>n;
	while(cin>>i>>j)
	{
		if(i==0&&j==0)
			break;
		else
			a[j]++;
	}
	for(k=0;k<n;k++)
	{
		if(a[k]==n-1)
		{
			cout<<k<<endl;
		    g=1;
		}
	}
	if(g==0)
		cout<<"NOT FOUND";
	return 0;
}

