int main()
{
	int n, wl=0,/*wordlength*/ ll=0,/*linelength*/ i;
	char c[50]={'\0'}, ch;
	char *p=c;
	cin>>n; cin.get();
        do
	{
                cin.get(ch);
		if (ch!=' ')  { cout<<ch; ll++; }
	}
        while (ch!=' ');
	for (i=1; i<=n; i++)
	{
		wl=0; p=c;
		cin.get(ch);
		while (ch!=' ' &&  ch!='\n')
		{
			wl++;  *p=ch; p++;
			cin.get(ch);
		}
		if (ll+wl<80 && i<n)
		{
			cout<<' '; ll=ll+wl+1;
		}else
		{
			cout<<endl; ll=wl;
		}
		for (p=c; p<(c+wl); p++) cout<<*p;
	}
	return 0;
}