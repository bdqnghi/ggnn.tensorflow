int main ( )
{
	int z, q, s, l, i, j, m, n, p;
	for (i = 1;i <= 5;i++)/*??????*/
	{
		z = i;
		for (j = 1;j <= 5;j++)
		{
			if (j == i) continue;/*???????????*/
			else q = j;
			for (m = 1;m <= 5;m++)
			{
				if (m == i||m == j) continue;
				else s = m;
				for (n = 1;n <= 5;n++)
				{
					if (n == i||n == j||n == m) continue;
					else l = n;
					if ((z + q == s + l)&&(z + l>s + q)&&(z + s < q))
					{
						for (p = 5;p >= 1;p--)/*??????*/
						{
							if (z == p) cout <<'z'<<' '<<10*z <<endl;
							if (q == p) cout <<'q'<<' '<<10*q <<endl;
							if (s == p) cout <<'s'<<' '<<10*s <<endl;
							if (l == p) cout <<'l'<<' '<<10*l <<endl;
						}
					}
				}
			}
		}
	}
	return 0;
}