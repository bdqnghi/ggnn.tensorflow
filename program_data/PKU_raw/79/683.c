

int main()
{
	int n, m;
	
	while (1) {
		cin >> n >> m;
		if (n == 0 && m == 0)
			break;
		int a[500];
		memset(a, 0, sizeof(a));
		int tmp = n, start = -1;

		while (tmp > 1) {
			int mtmp = (m-1) % tmp + 1;
			unsigned i = 0;
			while (i < mtmp) {
				start = (start+1) % n;
				while (a[start] == 1)
					start = (start+1) % n;
				++i;
			}
			a[start] = 1;
			--tmp;
		}
		for (unsigned i = 0; i < n; ++i) {
			//cout << a[i] << " ";
			if (a[i] != 1) {
				cout << i + 1 << endl;
				break;
			}
		}
	}
	return 0;
}