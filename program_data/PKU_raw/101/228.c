int main()
{
	int a, b, c;
	for(a = 1; a <= 3; a++)
	{
		for(b = 1; b <= 3; b++)
		{
			for(c = 1; c <= 3; c++)
			{
				if(a != b && a != c && b != c)
				{
					int ca = 0;
					int cb = 0;
					int cc = 0;
					if(b < a)
						ca++;
					if(c == a)
						ca++;
					if(a < b)
						cb++;
					if(a < c)
						cb++;
					if(c < b)
						cc++;
					if(b < a)
						cc++;
					if(a - ca == 1 && b - cb == 1 && c - cc == 1)
					{
					if(a == 3)
						cout << "A";
					if(b == 3)
						cout << "B";
					if(c == 3)
						cout << "C";
					if(a == 2)
						cout << "A";
					if(b == 2)
						cout << "B";
					if(c == 2)
						cout << "C";
					if(a == 1)
						cout << "A";
					if(b == 1)
						cout << "B";
					if(c == 1)
						cout << "C";}
				}
			}
		}
	}
	return 0;
}