int main()
{
	int n,t;
	char a[100][21];
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		int tag=0;
		if(!((a[i][0]>='a'&&a[i][0]<='z')||(a[i][0]>='A'&&a[i][0]<='Z')||a[i][0]=='_'))
		{
			cout<<"no"<<endl;
			continue;
		}
		else
		{
			t=strlen(a[i]);
			for(int j=1;j<t;j++)
			{
				if((a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='A'&&a[i][j]<='Z')||(a[i][j]>='0'&&a[i][j]<='9')||a[i][j]=='_')
					continue;
				else {
					tag=1;
					cout<<"no"<<endl;
					break;
			}
			}
			if(tag==0)
			 cout<<"yes"<<endl;
	}
	}
	return 0;
}