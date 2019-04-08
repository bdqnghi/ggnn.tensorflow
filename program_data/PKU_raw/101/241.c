/*****************************
**  ??????			**
**  ???1000012847		**
**  ??????			**
**  ???2010.11.19		**
*****************************/


int main()
{
	int a , b , c;
	for (a = 1; a <= 3; a ++)   //?123??????????????????
	{
		for (b = 1; b <= 3; b ++)
		{
			for (c = 1; c <= 3; c ++)
			{
				//?????????????????
				if ((a + (b > a) + (c == a)) == 3 && (b + ( a > b) + (a > c)) == 3 && (c + (c > b) + (b > a)) == 3)
				{
					if (a > b && b > c)          //?????????????????
						cout << "CBA" << endl;
					else if (a > c && c > b)
						cout << "BCA" << endl;
					else if (b > a && a > c)
						cout << "CAB" << endl;
					else if (b > c && c > a)
						cout << "ACB" << endl;
					else if (c > a && a > b)
						cout << "BAC" << endl;
					else
						cout << "ABC" << endl;
				}
			}
		}
	}
	return 0;
}