/**
 * @file   2.cpp
 * @author 3&#194;&#203;&#188;&#189;ü
 * @date   2013-12-04
 * @description
 *         &#188;&#198;&#203;&#227;&#184;&#197;&#194;&#219;×÷ò??oàyìa(11.8) &#207;&#184;&#190;ú?&#196;·±&#214;3ó&#235;à&#169;é?
 */


int a[10][10];
void func(int day);

int main()
{
	int day;
	cin >> a[5][5] >> day;

	func(day);

	for (int i = 1; i <= 9; ++i)
	{
		for (int j = 1; j <= 8; ++j)
			cout << a[i][j] << " ";
		cout << a[i][9] << endl;
	}
	return 0;
}

void func(int day)
{
	if (day == 0) return;
	int b[10][10] = {0};
	for (int i = 1; i <= 9; ++i)
		for (int j = 1; j <= 9; ++j)
			if (a[i][j])
			{
				b[i][j] += a[i][j];
				for (int p = i - 1; p <= i + 1; ++p)
					for (int q = j - 1; q <= j + 1; ++q)
						b[p][q] += a[i][j];
			}

	for (int i = 1; i <= 9; ++i)
		for (int j = 1; j <= 9; ++j)
			a[i][j] = b[i][j];

	func(day - 1);
}