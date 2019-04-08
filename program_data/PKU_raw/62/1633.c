int main()
{
	int i,n;
	char a[100];
	cin.getline(a,100);
	n=strlen(a);
	char *p;
	p=a;
	for(i=1;i<=n;i++)
	{
		if((*p==' ')&&(*(p+1)==' '))
		{
			p=p+1;
			continue;
		}
		cout<<*p;
		p=p+1;
	}
	return 0;
}