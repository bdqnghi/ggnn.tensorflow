/*
 * 007.cpp
 *
 *  Created on: 2012-11-28
 *      Author: asus
 */

int m = 0, n = 0, a[20] = {0}, b[20] = {0}, c[40] = {0};
void input ()
{
	cin >> m >> n;
	for (int i = 1; i <= m; i++)
		cin >> a[i];
	for (int j = 1; j <= n; j++)
		cin >> b[j];
}

void sort ()
{
	for (int j = 1; j < m; j++)
		for (int i = 1; i <= m - j; i++)
			if (a[i] > a[i + 1])
			{
				int p = a[i];
				a[i] = a[i + 1];
				a[i + 1] = p;
			}
	for (int j = 1; j < n; j++)
			for (int i = 1; i <= n - j; i++)
				if (b[i] > b[i + 1])
				{
					int p = b[i];
					b[i] = b[i + 1];
					b[i + 1] = p;
				}
}

void combine ()
{
	for (int i = 1; i <= m; i++)
		c[i] = a[i];
	for (int j = 1; j <= n; j++)
		c[m + j] = b[j];
}

void print()
{
	for (int i = 1; i < m + n; i++)
		cout << c[i] << " ";
	cout << c[m + n] << endl;
}

int main ()
{
	input ();
	sort();
	combine();
	print();
	return 0;
}