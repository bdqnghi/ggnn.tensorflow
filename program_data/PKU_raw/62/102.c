int main()
{
	int i, j, n,a, b[101] = { 0 };
	char str[101];
	cin.getline(str,101);
	a=strlen(str);
	for(i=0;i<a;i++)
	{
		if(str[i]==' '&&str[i+1]==' ')
		{
			b[i+1] = 1;
		}
	}
	for(j=0;j<a;j++)
	{
		if(b[j]==0)cout<<str[j];
	}
	return 0;
}


