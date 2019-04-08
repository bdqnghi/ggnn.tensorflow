int main()
{
	char m[102];
	cin.getline(m,102);
	int len=strlen(m);
	for(int i=0;i<len;i++)
	{
		if(m[i]==' ')
		{
			if(m[i-1]!=' ')
				cout<<m[i];
		}
		else
			cout<<m[i];
	}
	cout<<endl;
	return 0;
}