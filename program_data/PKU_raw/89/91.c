int main()
{
	int result=1;
	int n;
	int i;
	cin>>n;
	int m[10000][2];//m[i][0]??m??????m[i][1]????m???
	int a,b;
	for(i=0;i<10000;i++)
	{
		m[i][0]=m[i][1]=0;
	}
	while(cin>>a>>b)
	{
		if(a==0&&b==0)
		{
			break;
		}
		m[a][0]++;
		m[b][1]++;
	}
	for(i=0;i<n;i++)
	{
		if(m[i][0]==0&&m[i][1]==n-1)
		{
			result=0;
			cout<<i<<endl;
		}
	}
	if(result)
	{
		cout<<"NOT FOUND"<<endl;
	}
	return 0;
}

