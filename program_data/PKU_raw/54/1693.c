int n, k, m, first = 1, see, ok= 0;
void monkey(int i, int j)
{
	if(i == n)
	{cout << n * j + k; ok = 1; return;}
	see = n * j + k;
	if(see % (n - 1) == 0)
	{monkey(i + 1, see / (n - 1));}
}
int main()
{
	int i = 1;
	cin >> n;
	cin >> k;
	do
	{(monkey(1, i)); i++;}while(ok == 0);
	return 0;
}