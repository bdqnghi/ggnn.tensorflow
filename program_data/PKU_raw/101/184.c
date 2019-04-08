/*
 * file    homework 8_4
 * author  ??
 * date    2010-11-18
 * description
           ???????
*/



int main()
{
	int a, b, c, t;
	int aa, bb, cc;
	for (a = 0; a <= 2; a ++)
	{
		for (b = 0; b <= 2; b ++)
        {
			for (c = 0; c <= 2; c ++)
			{
				t = 0;
				aa = (b > a) + (c == a);
				bb = (a > b) + (a > c);
				cc = (c > b) + (b > a);
				t = (a + aa == 2) + (b + bb == 2) + (c + cc == 2);
			    if (t == 3) break;
			}
			if (t == 3) break;
		}
		if (t == 3) break;
	}
	if (a > b)
		if(b > c)
			cout << "CBA" <<endl;
		else
			if (a > c)
				cout << "BCA" <<endl;
			else
				cout << "BAC" << endl;
	else
		if (a > c)
			cout << "CAB" << endl;
		else 
			if(b > c)
				cout << "ACB" << endl;
			else
				cout << "ABC" << endl;

	return 0;
}


