//****************************************************************
// ???wusy                                                    *
// ???11,17                                                   *
// ??????                                                  *
//****************************************************************
int main()
{
	int sa,sb,sc;
	for(int a = 1; a <= 3; a++)
		for(int b = 1; b <= 3; b++)
			for(int c = 1; c <= 3; c++)
			{
				sa = (b > a) + (c == a);
				sb = (a > b) + (a > c);
				sc = (c > b) + (b > a);

				if( (a+sa == 3) && (b+sb == 3) && (c+sc == 3) )
				{
					if(a>b && b>c)
						cout << "CBA";
					if(a>c && c>b)
						cout << "BCA";
					if(b>c && c>a)
						cout << "ACB";
					if(b>a && a>c)
						cout << "CAB";
					if(c>b && b>a)
						cout << "ABC";
					if(c>a && a>b)
						cout << "BAC";
				}
			}
	return 0;
}
				




