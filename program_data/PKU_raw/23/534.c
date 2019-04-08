int main()
{
	char str[100][110];
	int lon[100]={0};
	int n=0,i,j;
	char c;
	do
	{
		cin.get(c);
		if ((c>='A')&&(c<='z'))
		{
			str[n][lon[n]]=c;
			lon[n]++;
		}
		if (c==' ') n++;
	} while (c!='\n');
	for (i=n;i>=0;i--)
	{
		for (j=0;j<lon[i];j++)
			cout<<str[i][j];
		if (i>0) cout<<' ';
		else cout<<endl;
	}
	return 0;
}