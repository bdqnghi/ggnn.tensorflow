int main()
{
	char s[102],x;
	cin.getline(s,102);
	int l;
	l= strlen(s);
	char *p,*q;
	for(p=s,q=s+1;q<s+l;p++,q++)
	{
		x=*p+*q;
		cout<<x;
	}
	p=s+l-1;q=s;
	x=*p+*q;
	cout<<x;
	return 0;
}
		
