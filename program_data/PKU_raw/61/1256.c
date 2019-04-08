//********************************
//*???2.cpp   **
//*?????? 1200012768 **
//*???2013.1.10  **
//*?????????  **
//********************************
int fun(int a)
{
	if (a <= 2)
		return 1;
	return fun(a - 1) + fun(a - 2);
} 
int main()
{
	int n, a;
	cin >> n;
	while (n--)
	{
		cin >> a;
		cout << fun(a) << endl;
	}
	return 0;
}
