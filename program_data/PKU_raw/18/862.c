int main()
{
	int i, j, k, l;
	int n, arr[101][101], temp[101][101];
	int cnt_a, cnt_b;
	int (*ptr)[101], ans, m;
	int (*ptr_t)[101];
	int mini;
	ptr = arr;
	ptr_t = temp;
	cin >> n;
	for(k = 0; k < n; ++k)
	{
		memset(arr, 0, sizeof(arr));
		ans = 0;
		for(i = 0; i < n; ++i)
			for(j = 0; j < n; ++j)
			{
				cin >> *(*(ptr + i) + j);
			}
		m = n;
		for(i = 0; i < n - 1; ++i)
		{
			mini = 2147483647;
			for(j = 0; j < m; ++j)
			{
				mini = 2147483647;
				for(l = 0; l < m; ++l)
				{
					if(*(*(ptr + j) + l) < mini)
						mini = *(*(ptr + j) + l);
				}
				for(l = 0; l < m; ++l)
				{
					*(*(ptr + j) + l) -= mini;
				}
			}
			mini = 2147483647;
			for(j = 0; j < m; ++j)
			{
				mini = 2147483647;
				for(l = 0; l < m; ++l)
				{
					if(*(*(ptr + l) + j) < mini)
						mini = *(*(ptr + l) + j);
				}
				for(l = 0; l < m; ++l)
				{
					*(*(ptr + l) + j) -= mini;
				}
			}
			ans += *(*(ptr + 1) + 1);
			cnt_a = 0;
			cnt_b = 0;
			for(j = 0; j < m; ++j)
			{
				cnt_b = 0;
				for(l = 0; l < m; ++l)
				{
					if(j == 1 || l == 1)
						continue;
					*(*(ptr_t + cnt_a) + cnt_b) = *(*(ptr + j) + l);
					cnt_b++;
				}
				if(j != 1)
					cnt_a++;
			}
			memset(arr, 0, sizeof(arr));
			for(j = 0; j < cnt_a; ++j)
				for(l = 0; l < cnt_b; ++l)
				{
					*(*(ptr + j) + l) = *(*(ptr_t + j) + l);
				}
			m--;
		}
		cout << ans << endl;
	}
	return 0;
}

