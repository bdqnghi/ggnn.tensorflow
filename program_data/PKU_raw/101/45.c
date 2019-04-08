int main()
{
	int a, b, c;
	int l, m, n;
	for (a = 0; a < 3; a++)
		for (b = 0; b < 3; b++)
			for (c = 0; c < 3; c++)
			{
				l = (b > a) + (c == a);
				m = (a > b) + (a > c);
				n = (c > b) + (b > a);
				if ((l + a == 2) && (m + b == 2) && (n + c == 2))
				{
					if (a > b && b > c)
						cout <<"CBA";
					if (a > c && c > b)
						cout <<"BCA";
					if (b > a && b > c)
						cout <<"CAB";
					if (b > c && c > a)
						cout <<"ABC";
					if (c > a && a > b)
						cout <<"BAC";
					if (c > b && b > a)
						cout <<"ABC";
				}
		}
		return 0;
}




