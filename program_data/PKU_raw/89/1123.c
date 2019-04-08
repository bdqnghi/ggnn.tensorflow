
struct person
{
	int flag;
	int count;
}p[10001];

int main()
{
	int n, i, j, g = 0;
	cin >> n;
	while (1)
	{
		cin >> i >> j;
		if (i == 0 && j == 0) break;
		p[i].flag = 1;
		p[j].count++;
	}
	for (int i = 0; i < n; i++)
	{
		if (p[i].flag == 0 && p[i].count == n - 1) g = 1, cout << i << endl;
	}
	if (g == 0) cout << "NOT FOUND" << endl;
	return 0;
} 
