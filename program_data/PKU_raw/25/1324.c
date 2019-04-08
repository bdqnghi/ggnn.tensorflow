//********************************
//*?????2?N??   **
//*?????? 1300012861 **
//*???2013.11.17  **
//********************************
int main()
{
	int N, i, j, len,t;
	const int MAX_LEN = 200;
	unsigned num[MAX_LEN]; 
	memset(num, 0, sizeof(num)); //????
	num[0] = 2; 
	len = 1; 
	cin >> N; 
	if ( N == 0 )
		cout << 1 << endl; 
	else
	{
		for ( i = 2; i <= N; i++ )
		{
			t=0;
			for ( j = 0; j < len; j++ )
			{	num[j] = 2 * num[j]+t;
				t=num[j]/10;
				num[j]%=10;
			}
			if ( t > 0 )
			{num[len]=t;len++;} 
		}
		j = len; 
		while ( num[j] == 0)
			j--; 
		for ( ; j >= 0; j-- )
			cout << num[j]; 
		cout << endl;
	}
	return 0;
}

