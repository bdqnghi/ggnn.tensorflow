int main()
{
	int a[1000]={0},n,k,i,j,judge=0;//judge???????
	cin>>n>>k;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<(n-1);i++)//????????????????
	{
		for(j=i+1;j<n;j++)
		{
			if((a[i]+a[j])==k)
			{
				cout<<"yes";
				judge=1;
				break;
			}
		}
		if(judge)
			break;
	}
	if(judge==0)
		cout<<"no";
	return 0;
}
