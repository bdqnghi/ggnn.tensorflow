int main()
{
    char c[100][100];
	int m,i,a[100];
	unsigned j;
	cin>>m;
	for(i=0;i<m;i++)
		a[i]=1;
	for(i=0;i<m;i++)
	{
		cin>>c[i];
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<strlen(c[i]);j++)
		{
			if(c[i][0]!='_'&&(c[i][0]<'A'||c[i][0]>'z'||c[i][0]>'Z'&&c[i][0]<'a'))
			{
				a[i]=0;
				break;
			}
			if(c[i][j]!='_'&&(c[i][j]<'A'||c[i][j]>'z'||c[i][j]>'Z'&&c[i][j]<'a')&&(c[i][j]<'0'||c[i][j]>'9'))
			{
				a[i]=0;
				break;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		if(a[i]==0)cout<<"no"<<endl;
		else cout<<"yes"<<endl;
	}
	return 0;
}

