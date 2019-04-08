int main()
{
	char a[201];
	cin.getline(a,201);
	int n=strlen(a);
	
	char *p=a;
	int i=1;
	while(i<=n)
	{
		if(*p!=' ')
		{
		cout<<*p;
		p++;
		i++;
		}
		else 
		{
			cout<<' ';
			while(*p==' ')
			{
				p++;
				i++;
			}
		}
	}
	
	return 0;
}
