int main()
{
	int n,a[1000],c[26]={0},max1=0,temp;
	char m[1000][26],max2;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i-1];
		getchar();
		cin.getline(m[i-1],26);
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<26;j++)
		{
			c[m[i][j]-'A']++;
		}
	//cout<<c[1]<<endl;
	for(int s=0;s<26;s++)
	{
		//cout<<c[s]<<" "<<max1<<endl;
		if(max1<=c[s])
		{
			max1=c[s];
			temp=s+'A';
			max2=temp;
		}
	}
	cout<<max2<<endl;
	cout<<max1<<endl;
	for(int i=0;i<n;i++)
		for(int j=0;j<26;j++)
			if(m[i][j]==max2)
			{
				cout<<a[i]<<endl;
				break;
			}

	return 0;
}

