int high(int *, int *,int);
const int maxmax = 200;
char a[maxmax + 1], b[maxmax + 1];
int aa[maxmax + 1], bb[maxmax];
int main()
{
	cin.getline(a,201);
	cin.getline(b,201);
	memset(aa, 0, sizeof(aa));
	memset(bb, 0, sizeof(bb));
	int length1 = strlen(a), length2 = strlen(b);
	int i, j;
	for (i = 0, j = length1 - 1; j >= 0; j--)
	{
		aa[i++] = a[j] - '0';
	}
	for (i = 0, j = length2 - 1; j >= 0; j--)
	{
		bb[i++] = b[j] - '0';
	}
	if (aa[0] == 0 && bb[0] == 0)
		cout<<0<<endl;
	else
	{
		int highest = high(aa, bb, maxmax + 1);
		for (i = highest; i >= 0; i--)
		{
			cout<<aa[i];
		}
	}
	return 0;
}
int high(int *a1, int *b1, int m)
{
	int d;
	for (int i = 0; i < m; i++)
	{
		a1[i] += b1[i];
		if (a1[i] >= 10)
		{
			a1[i] -= 10;
			a1[i + 1] += 1;
		}
		if (a1[i] != 0)
			d = i;
	}
	return d;
}