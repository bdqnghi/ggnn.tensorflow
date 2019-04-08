int n, k, i, m;
int N = INT_MAX;   
int total(int number, int sur)
{
	if ( number == n )
		return i;
	if ( total(number+1, sur) != 0 && total(number+1, sur) % (n-1) == 0 )
		return n*total(number+1, sur)/(n-1) + k;
	return 0; 
}
int main()
{
	cin >> n >> k; 
	for (i = n+k; i < N; i += n) 
	{	
		m = total(1, i);
		if (m != 0)
			break; 
	}
	cout << m << endl; 
	return 0; 
}