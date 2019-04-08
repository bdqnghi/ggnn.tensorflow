long t(int u)
{
	if(u == 1)
		return 1 ;
	else if(u == 2)
		return 1 ;
	else return (t(u-1)+t(u-2));
}
int main()
{
	int n , u , i;
	cin >> n ;
	for (i = 0 ; i < n ;i++)
	{
		cin >> u ;
		cout << t(u)<<endl ;
	}
	return 0 ;
}
