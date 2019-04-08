//********************************
//*?????13                 **
//*??????                 **
//*???2012.11.10             **
//*******************************/


int main ()
{
	char a[100];
	int b[100], s[100] = {0};
	int n, i, flag = 0;
	cin >> a;
	n = strlen(a);
	for ( i = 0; i < n; i++)
		b[i] = a[i] - '0';
	for ( i = 1;  i < n; i++)
	{
		s[i] = (10 * b[i - 1] + b[i]) / 13; 
		b[i] = (10 * b[i - 1] + b[i]) % 13;
	}
	if (s[1] != 0)
	{
		cout << s[1];
		flag = 1;
	}
	for ( i = 2; i < n; i++)
	{
		cout << s[i];
		flag = 1;
	}
	if (flag == 0)
		cout << 0;
	cout << endl;
	cout << b[n - 1] << endl; 
	return 0;
}	