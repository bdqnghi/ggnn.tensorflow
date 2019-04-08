int k;
void tree(int m, int n)
{
	if (m == n)
		k = m; // ?? 
	else if (m > n)
		tree(m / 2, n); 
	else if (m < n)
		tree(m, n / 2); // ?? 
}
int main()
{
	int x, y;
	cin >> x >> y;
	tree(x , y); 
	cout << k;
	return 0;
}
