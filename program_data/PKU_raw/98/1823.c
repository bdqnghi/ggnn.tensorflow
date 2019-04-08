//********************************
//*???2.???? **
//*?????? 1300017623 **
//*???2013.12.11  **
//********************************
int main()
{
	char a[1000][43];
	char (*p)[43] = a;
	int n, l, i;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> *(p + i);
	do
	{
		cout << *p;
		l = strlen(*p);
		p++;
		while((l += strlen(*p) + 1) <= 80)
		{
			cout << " " << *p;
			p++;
			if (p > &a[n-1])
				break;
		}
		cout << endl;
	}while(p <= &a[n-1]);

	return 0;
}