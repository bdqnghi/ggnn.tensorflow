
int f(int m,int n)
{
	int k;
	if (m==1)
		return 1;
	if (n==1)
		return 1;
	else 
	{
		if (m>n) 
			k=f(m,n-1)+f(m-n,n);
		if (m==n)
			k=f(m,n-1)+1;
		if (m<n)
			k=f(m,m);
	    return k;
	}
}

int main ()
{
	int t,m,n,l;
	cin >> t;
	for (int i=0;i<t;i++)
	{
		cin >>m >>n;
		l=f(m,n);
		cout << l<< endl;
	}
	return 0;
}