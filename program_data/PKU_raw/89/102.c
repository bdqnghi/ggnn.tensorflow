int main()
{
	int n,i,j;
	int flag[10000]={0},num[10000]={0};
	cin>>n;
	while(cin>>i>>j)
	{
		if(i == 0 && j == 0)
			break;
		flag[i] = 1;
		num[j] ++;
	}

	for(i = 0;i < n; i++)
	{
		if(flag[i] == 0)
		{
			if(num[i] == n - 1)
				cout<<i<<endl;
			else
				cout<<"NOT FOUND"<<endl;
			break;
		}

	}
	if(i == n)
		cout<<"NOT FOUND"<<endl;

    return 0;
}
