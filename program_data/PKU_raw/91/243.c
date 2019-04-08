int main()
{
	char a[150]={'\0'};
	gets(a);
	char *p=a;
	char q=a[0];
	int i=0;
	for(i=0;i<strlen(a)-1;i++)
	{
		*p=*p+*(p+1);
		p++;
	}
	*p+=q;
	cout<<a;
	return 0;
}