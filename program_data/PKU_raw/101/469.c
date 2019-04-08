int main()
{
	int a, b, c, i, j, h;
	char m[3];
	for (i = 1; i <= 3; i++)
	{
		for (j=1;j<=3;j++)
		{
			for (h=1;h<=3;h++)
			{
				a = ((j>i)+(h==i));
				b = ((i>j)+(i>h));
				c = ((h>j)+(j>i));
				if (a != b && b != c && c != a )
				{
					m[a] = 'A';
					m[b] = 'B';
					m[c] = 'C';
					if (a + i == 3 && b + j == 3 && c + h == 3)
					cout << m[2] << m[1] << m[0];
				}
			}
		}
	}
	return 0;
}