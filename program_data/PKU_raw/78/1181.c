//********************************
//*???8.cpp   **
//*?????? 1200012768 **
//*???2013.1.5  **
//*??????  **
//********************************
int main()
{
	int z, q, s, l, i, j;
	for (z = 1; z < 6; z++)
		for (q = 1; q < 6; q++)
		{
			if (q == z)
				continue;
			for (s = 1; s < 6; s++)
			{
				if (s == z || s == q)
					continue;
				for (l = 1; l < 6; l++)
				{
					if (l == z || l == s || l == q)
						continue;
					if ((z + q == s + l) && ((z + l) > (s + q)) && (z + s < q))
					{
						for (i = 5; i > 0; i--)
						{
							if (z == i)
								cout << "z " << z * 10 << endl;
							else if (q == i)
								cout << "q " << q * 10 << endl;
							else if (s == i)
								cout << "s " << s * 10 << endl;
							else if (l == i)
								cout << "l " << l * 10 << endl;
						}
						break;
					}
				}
			}
		}
	return 0;
}
