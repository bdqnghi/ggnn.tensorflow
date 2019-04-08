char c[110];
int Try()
{
	int i,j;
	int L=-1,R=-1;
	for(i=0;i<=strlen(c)-1;++i)
	{
		if(c[i]=='(')
			L=i;
	}
	for(j=strlen(c)-1;j>L;--j)
	{
		if(c[j]==')')
			R=j;
	}
	if(L!=-1||R!=-1)
	{
		if(L==-1)
		{
			c[R]='?';
		}
		
		else if(R==-1)
		{
			c[L]='$';
		}
		else if(L<R)
		{
			c[L]=' ';
			c[R]=' ';
		}
		else if(L>R)
		{
			c[L]='$';
			c[R]='?';
		}
		Try();
	}
	if(L==-1&&R==-1)
		return 1;
}
int main()
{
	int k;
	while(cin>>c)
	{
	for(k=0;k<=strlen(c)-1;++k)
	{
		cout<<c[k];
	}
	cout<<endl;
	for(k=0;k<=strlen(c)-1;++k)
	{
		if(c[k]!='('&&c[k]!=')') 
			c[k]=' ';
	}
	Try();
	for(k=0;k<=strlen(c)-1;++k)
	{
		cout<<c[k];
	}
	cout<<endl;
	}
	return 0;
}
