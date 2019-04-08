int main()
{
	int i,j,k,t; cin>>t;
	char a[t][100000];
	for (i=0;i<t;i++)
		cin>>a[i];
	for (k=0;k<t;k++)
	{
		int length=strlen(a[k]);
		for (i=0;i<length;i++)
			{
			for (j=0;j<length;j++)
				if (a[k][i]==a[k][j]&&i!=j)
					break;
			if (j==length)
				{
				cout<<a[k][i]<<endl;
				break;
				}
			}
		if (i==length)
			cout<<"no"<<endl;
	}
	return 0;
}
