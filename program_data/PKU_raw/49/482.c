void  Palindrome(char []);
int main()
{
	char str1[500];
	cin >> str1;
	Palindrome(str1);
	return 0;
}
void  Palindrome(char str1[])
{	
	int i, k, m, n, a, b;
	m = strlen(str1);
	for (i = 1; i < m; i++)
	{
		for (k = 0; k < m; k++)
		{
			for (a = k,b = k + i; a < b; a++,b--)
			{
				if (str1[a] != str1[b])
					break;
			}
			if (a == b + 1 || a == b)
			{
				for(n = k; n <= k + i; n++)
				{
					cout << str1[n];
				}
				cout << endl;
			}
		}
	}
}