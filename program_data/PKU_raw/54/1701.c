int n , k ;
int p = 1 ;
int monkey(int t)
{
	int x = 0;
	if(t == 1)
		return p*n +k ;
	else 
	{
		while((monkey(t-1) % (n-1) != 0))
		{
			p++;
		}
			return (monkey(t-1)*n/(n-1)+k) ;
	}
}
int main ()
{
	cin >> n >> k ;
	cout << monkey(n) <<endl ;
	return 0 ;
}

