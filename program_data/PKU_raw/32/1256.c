//********************************
//*????????   **
//*?????? 1300012861 **
//*???2013.11.17  **
//********************************
int main()
{
	int n, i, j, k, max, str1[110], str2[110]; 
	char num1[110], num2[110]; 
	cin >> n; 
	for ( i = 1; i <= n; i++ )
	{
		cin >> num1; 
		int nlen1 = strlen(num1); 
		cin >> num2;
		int nlen2 = strlen(num2);
		memset(str1, 0, sizeof(str1)); 
		memset(str2, 0, sizeof(str2)); 
		j = 0;
		for ( k = nlen1 - 1; k >= 0; k-- )
		{
			str1[j++] = num1[k] - '0'; 
		}
		j = 0; 
		for ( k = nlen2 - 1; k >= 0; k-- )
			str2[j++] = num2[k] - '0';
		for ( j = 0; j < nlen2; j++ )
		{
			str1[j] = str1[j] - str2[j]; 
			if ( str1[j] < 0 )
			{
				str1[j+1]--; 
				str1[j] = 10 + str1[j]; 
			}
		}
		j = nlen1; 
		while ( str1[j] == 0 )
			j--; 
		for ( ; j >= 0; j-- )
			cout << str1[j]; 
		cout << endl; 
	}
	 
	
	return 0;
}

