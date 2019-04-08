
int feb(int n)
{
	if (n == 1)
		return 1;
	else
	{
		if (n == 2)
			return 1;
		else 
			return feb(n-1) + feb(n-2);
	}
	return true;
}

int main()
{
	int m, zu, i;
	int mem[10000];
	cin >> zu;
	for (i = 0; i < zu; i ++)
	{
		cin >> m;
		mem[i] = feb(m);
	}
	for (i = 0; i < zu; i ++)
	{
		if (i < zu - 1)
			cout << mem[i] << endl;
		else
			cout << mem[i];
	}
	return 0;
}