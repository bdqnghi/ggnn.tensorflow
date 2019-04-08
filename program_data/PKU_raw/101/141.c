int main()
{
	int a, b, c, n[3];
	int A[2], B[2], C[2];
	int d, e, f, i, j;
	for (a = 1; a <= 3; a++)
	{
		for (b = 1; b <= 3; b++)
		{
			if (b == a) continue;
			for (c = 1; c <= 3; c++)
			{
				if (c == a||c == b) continue;
				A[0] = b > a; A[1] = c == a; d = A[0] + A[1];
				B[0] = a > b; B[1] = a > c; e = B[0] + B[1];
				C[0] = c > b; C[1] = b > a; f = C[0] + C[1];
				if (a + d == 3&&b + e == 3&&c + f == 3)
				{
					if (a > b&&b > c) cout << 'C' << 'B' << 'A' << endl;
					if (a < b&&b < c) cout << 'A' << 'B' << 'C' << endl;
					if (a > b&&b < c&&a > c) cout << 'B' << 'C' << 'A' << endl;
					if (a > b&&b < c&&a < c) cout << 'B' << 'A' << 'C' << endl;
					if (a < b&&b > c&&a > c) cout << 'C' << 'A' << 'B' << endl;
					if (a < b&&b > c&&a < c) cout << 'A' << 'C' << 'B' <<endl;
				}
			}
		}
	}
	return 0;
}