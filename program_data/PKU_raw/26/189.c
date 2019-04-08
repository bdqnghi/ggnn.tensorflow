int main()
{
	int i=0;
	char *p,*m;
	char a[100];
	gets(a);
	m=a;
	p=a;
	while(a[i]!='\0')
	{
		if(a[i]==' ')
		{
			*p=' ';
			p++;
			while(a[i]==' ')
				i++;
			*p=a[i];
		}
		else
		{
			*p=a[i];
			p++;
			i++;
		}
	}
	*p='\0';
	cout<<m<<endl;
	return 0;
}