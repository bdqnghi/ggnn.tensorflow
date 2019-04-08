//********************************
//*????????    **
//*?????? 1300012855 **
//*???2013.11.13  **
//********************************

int main(void)
{
	int n; // ???
	char ac[101], bc[101]; // ??????
	int a[101], b[101]; // ??????
	int al, bl; // ???????
	cin >> n;
	for(int i = 1; i <= n ; i++)
	{
		cin >> ac >> bc;
		al = strlen(ac);
		bl = strlen(bc);
		for(int j = al - 1; j >= 0; j--) // ????
		{
			a[j] = ac[al - j - 1] - '0';
		}
		for(int j = bl - 1; j >= 0; j--) // ????
		{
			b[j] = bc[bl - j - 1] - '0';
		}
		for(int j = 0; j < bl; j++) // ???
		{
			a[j] -= b[j]; // ??
			if(a[j] < 0) // ?????????
			{
				a[j] += 10;
				a[j + 1]--;
			}
		}
		int x;
		for(x = al - 1; a[x] == 0; x--); // ???????
		for(; x >= 0; x--)
		{
			cout << a[x]; // ????
		}
		cout << endl;
	}
	return 0;
}
		