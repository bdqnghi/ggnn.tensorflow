// ??????????????
// ??
// 1000012768
// 2010.11.19
int main()
{
	char a[100], b[100];   //???????????
	int anum[100], bnum[100];
	int n, i, j, k, p;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a >> b;
		p = 0;
		int la = strlen(a);  //??????????????????
		int lb = strlen(b);
		for (j = la - 1; j >= 0; j--)
			anum[p++] = a[j] - '0';
		p = 0;
		for (j = lb - 1; j >= 0; j--)
			bnum[p++] = b[j] - '0';
		for (k = 0; k < lb; k++)
		{
			anum[k] = anum[k] - bnum[k];  //???????????0??????
			if (anum[k] < 0)
			{
				anum[k] += 10;
				anum[k + 1]--;
			}
		}
		for (k = la - 1; k >= 0; k--)
			cout << anum[k];   //????anum
		cout << endl;
	}
	return 0;
}




