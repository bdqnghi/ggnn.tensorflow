int main()
{
	int n,i,j;
	int know[10000]={0};
	cin>>n;
	for (i=0;i<n;i++)
		know[i]=0;
	while (cin>>i>>j)
	{
		if (i==j&&i==0)
			break;
		know[i]=-1;
		if (know[j]!=-1)
		{
			know[j]++;
			if (know[j]==n-1)
				cout<<j<<endl;
		}
	}
	return 0;
}