int len;
char a[200],b,g;
int match (int p)
{
	if (p==len-1)
		return p;
	int q;
	if (a[p]==b)
	{
		q=match(p+1);
		cout<<p<<" "<<q<<endl;
		return match(q+1);
	}
	else
		return p;
}
int main()
{
	cin>>a;
	len = strlen(a);
	b=a[0];
	g=a[len-1];
	match(0);
}