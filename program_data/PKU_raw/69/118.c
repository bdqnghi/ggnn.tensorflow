int main()
{
	char a[200], b[200];
	int at[200] = {0}, bt[200] = {0}, ans[201] = {0};
	int i, j, A, B, max = 0;
	cin.getline(a, 200);
	cin.getline(b, 200);
	A = strlen(a);
	B = strlen(b);	
	for (i = 0; i < A; i++)
		at[i] = a[A - i - 1] - '0';
	for (i = 0; i < B; i++)
		bt[i] = b[B - i - 1] - '0';
	if (A > B)
	{
		max = A;
		for (i = B; i < A; i++)
			bt[i] = 0;
	}
	else if (B > A)
		{
			max = B;
			for (i = A; i < B; i++)
				at[i] = 0;
		}
		else
		{
			max = A;
		}

	for (i = 0; i < max; i++)
	{
		ans[i] = ans[i] + at[i] + bt[i];
		if (ans[i] >= 10)
		{
			ans[i] = ans[i] - 10;
			ans[i + 1]++;
		}
	}
	for (i = max; i >= 0; i--)
		if (ans[i] > 0)
			break;
	if (i < 0)
		cout << '0' << endl;
	for(j = i; j >= 0; j--)
		cout << ans[j];
	cout << endl;
	return 0;
}