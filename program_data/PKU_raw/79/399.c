





int main()	{
	int a[100], b[100];
	int i, p = 1, q = 1;
	for (i = 0; p != 0 && q != 0; i ++)	{
		scanf("%d%d", &p, &q);
		a[i] = p; b[i] = q;
	};
	int j, aa, bb;
	int monkey[500];
	for (j = 0; j < i - 1; j ++)	{
		aa = a[j]; bb = b[j];
		int sum = 0;
		int ptr, s = 0;
		for (ptr = 0; ptr < aa; ptr ++)	monkey[ptr] = 1;
		for (ptr = 1; sum < aa - 1; ptr = (ptr + 1) % aa)	{
			if (monkey[ptr] == 1)	{
				s ++;
				if (s == bb)	{
					monkey[ptr] = 0;
					sum ++;
					s = 0;
				};
			};
		};
		int ans;
		for (ptr = 0; ptr < aa; ptr ++)	if (monkey[ptr] == 1)	ans = ptr;
		if (ans == 0)	ans = aa;
		printf("%d\n", ans);
	};
	return 0;
};
