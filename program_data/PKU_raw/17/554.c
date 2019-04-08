char c[120],ch;
int n;
int search(int p)//???‘?’?????????‘?’??
{
	int q=p+1;
	if (q>=n) return q;
	while ((c[q]!='?')&&(q<n))
	{
		if (c[q]=='$') q=search(q)+1;
		else q++;
	}
	if (q<n)
	{
		c[p]=' ';
		c[q]=' ';
	}
	return q;
}
int main()
{
	int i=0;
	while (cin>>ch)
	{
		cout<<ch;
                  n=0; i=0;
		while (ch!='\n')
		{
			if (ch=='(') c[n]='$';
			else
				{if (ch==')') c[n]='?';
				else c[n]=' ';}
			n++;
			cin.get(ch);
                           cout<<ch;
		}
		while (i<n)
		{
			while ((c[i]!='$')&&(i<n)) i++;
			i=search(i)+1;
		}
		for (i=0; i<n; i++) cout<<c[i];
		cout<<endl;
	}
	return 0;
}