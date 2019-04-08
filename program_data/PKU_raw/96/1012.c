int main ()
{
	char a[110]={0};
	char b[110]={0};
	cin.getline(a,100,'\n');
	int n;
	int p;	
	int q=a[0]-'0';
	n=strlen(a);
		for(int i=1;i<n;i++)
		{
			int m;
			p=q;
			m=p*10+(a[i]-'0');
			for(int j=0;13*j<=m;j++)
			{
				b[i-1]=(j+'0');
				q=m%13;
			}
		}
	if(b[0]=='0'&&b[1]!='\0')
	{
	for(int i=1;i<=strlen(b);i++)
	{
	b[i-1]=b[i];
	}
	}
	if(b[0]=='\0')
	{b[0]='0';}
	cout<<b<<endl;
	cout<<q;
	return 0;
}