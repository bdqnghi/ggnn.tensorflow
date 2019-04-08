int main()
{
	int a, b, c, A, B, C;
	char a1, a2, a3;
	for (a = 1; a <= 3; a++)
	{
		for (b = 1; b <= 3; b++)
		{
			for (c = 1; c <= 3; c++)
			{
				a1 = a2 = a3 = 0;
				A = (b > a) + (c == a);
				B = (a > b) + (a > c);
				C = (c > b) + (b > a);
				if ((A > B) && (A > C) && (a < b) && (a < c))
				{
					a1 = 'A';
					if ((B > C) && (b < c))
					{
						a2 = 'B';
						a3 = 'C';
					}
					else if ((C > B) && (c < b))
					{
						a2 = 'C';
						a3 = 'B';
					}
				}
				else if ((B > A) && (B > C) && (b < a) && (b < c))
				{
					a1 = 'B';
					if ((A > C) && (a < c))
					{
						a2 = 'A';
						a3 = 'C';
					}
					else if ((C > A) && (c < a))
					{
						a2 = 'C';
						a3 = 'A';
					}
				}
				else if ((C > A) && (C > B) && (c < a) && (c < b))
				{
					a1 = 'C';
					if ((A > B) && (a < b))
					{
						a2 = 'A';
						a3 = 'B';
					}
					else if ((B > A) && (b < a))
					{
						a2 = 'B';
						a3 = 'A';
					}
				}
				if (a1 * a2 * a3 != 0)
				{
					cout << a1 << a2 << a3 << endl;
				}
			}
		}
	}
	return 0;
}