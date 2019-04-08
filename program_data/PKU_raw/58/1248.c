int main()
{
	int n,i,j,k,m;
	cin>>n;
	char a[n][81];
	cin.getline(a[0],81);
	for (i=0;i<n;i++)
		cin.getline(a[i],81);
	for (i=0;i<n;i++)
	{
		if ((a[i][0]=='_')||(a[i][0]>='a'&&a[i][0]<='z')||(a[i][0]>='A'&&a[i][0]<='Z'))
		{
			k=strlen(a[i]);
			for (j=1;j<k;j++)
			{
				if          ((a[i][j]=='_')||(a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='A'&&a[i][j]<='Z')||(a[i][j]>='0'&&a[i][j]<='9'))    m=0;
				else     {cout<<'0'<<endl; break;}
			}
			if (j==k) cout<<'1'<<endl;
		}
		else cout<<'0'<<endl;
	}
	return 0;
}
