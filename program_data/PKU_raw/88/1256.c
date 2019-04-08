int main()
{
	int i,q;
	char *p=NULL;
	char str[100];
	cin.getline(str,99);
	p=str;
	for(i=0;p[i];i++)
	{
		if(p[i]<='9'&&p[i]>='0'&&p[i-1]!='-')
		{
			cout<<p[i];
		
		if(p[i+1]>'9'||p[i+1]<'0')
		cout<<endl;
	    }
	}
	cin>>q;
	return 0;
}