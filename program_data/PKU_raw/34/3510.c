//********************************
//*???1.cpp   **
//*?????? 1200012768 **
//*???2012.11.  **
//*???????  **
//********************************
int num(int n);
int main()
{
	int n;
	cin >> n;
	while (n != 1)
		n = num(n);
	cout << "End\n"; 
	return 0;
}
int num(int n)
{
	if (n % 2 == 0)
	{
		cout << n << "/2=" << n / 2 << endl;
		return n / 2;
	}
	else
	{
		cout << n << "*3+1=" << n * 3 + 1 << endl;
		return n * 3 + 1;
	}
}