int first_test(char a);
int test(char a);
int main()
{
	char a[101][85];
	int n,i,j,l;
	int final;
	cin>>n;
	cin.get();
	for(i=1;i<=n;i++)
	{   
		cin.getline(a[i],85,'\n');
		l=strlen(a[i]);
		final=first_test(a[i][0]);
		for(j=1;j<l;j++) final=final*test(a[i][j]);
		cout<<final<<endl;
	}
	return 0;
}
int first_test(char a)
{
	if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||a=='_') return (1);
	else return (0);
}
int test(char a)
{
	if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||a=='_'||(a>='0'&&a<='9')) return (1);
	else return (0);
}