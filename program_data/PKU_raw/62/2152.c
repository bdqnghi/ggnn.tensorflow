

int main()
{
	char str[101];
	char *p;
	int i;
	cin.getline(str,101);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]!=' ')
		{
			p=&str[i];
			cout<<*p;
			continue;
		}
		if(str[i]==' ')
			if(str[i-1]!=' ')
			{
				p=&str[i];
				cout<<*p;
				continue;
			}
	}
	cout<<endl;
	return 0;
}
