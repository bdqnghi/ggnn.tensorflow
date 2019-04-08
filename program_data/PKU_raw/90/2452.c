int put(int m,int n)//m????n???
{
	if (m<n)
		return (put(m,m));
	if (m==n)
		return (put(m,n-1))+1;
    if (n==1)
		return 1;
	if ((n==0)||(m==0))
		return 0;
	if (m==1)
		return 0;
	else 
		return (put(m,n-1)+put(m-n,n));
}
int main ()
{
	int t,i,m,n,s,j;
	cin >> t ;
	j=1;
	for (i=1;i<=t;i++)
	{
		cin >> m >> n;
		s=put (m,n);
		if (j<t)
		cout << s << endl;
		else cout << s;
	}
}
