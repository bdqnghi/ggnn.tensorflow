int main()
{	
        int a,b,i,x=0,len,c[10000],m[10000];
	char n[10000];	cin>>a>>n>>b;
	for (i=0;n[i]!='\0';i++)
	{	if (n[i]>='a' && n[i]<='z' )
			c[i]=n[i]-'a'+10;
		else if(n[i]>='A' && n[i]<='Z')
			c[i]=n[i]-'A'+10;
		else c[i]=n[i]-'0';
		         x=x*a+c[i];
	}
	i=0;
	for (i=0;x>=b;i++)
	{
		m[i]=x%b;
		x=x/b;
	}
	m[i]=x;	len=i;
	for (i=len;i>=0;i--)
	{
		if (m[i]>9) cout<<(char)(m[i]-10+'A');
		else cout<<m[i];
	}
	return 0;
}
