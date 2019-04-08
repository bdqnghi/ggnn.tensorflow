//****************************************
//*??????                         **
//*????? 1100012780     	        **
//*???2011.10.16                     **
//****************************************
int main()
{
	int A,B,C,a,b,c;//A,B,C?????ABC?????????????abc?????????
	for (a = 0;a <= 2;a++)
	{
		if (a == 0)//A???a?????
			continue;
		for (b = 0;b <= 2;b++)
		{
			if (b == a)//b????a?????
				continue;
			for (c = 0;c <= 2;c++)
			{
				A = (b > a);
				B = (a > b) + (a > c);
				C = (c > b) + (b > a);
				if ((b == a) || (b == c) || (a == c))
					continue;
				if ((a + A == 2) && (b + B == 2) && (c + C == 2))
				{
					if (a == 2)
					{
						if (b == 1)
							cout<<"CBA";
						if (b == 0)
							cout<<"BCA";
					}
					if (a == 1)
					{
						if (b == 0)
							cout<<"BAC";
						if (b == 2)
							cout<<"CAB";
					}
				}
			}
		}
	}
	return 0;
}
					
