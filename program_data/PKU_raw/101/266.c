/**
 * ????bifanliang.cpp
 * ????????
 * ??????
 * ???2010.11.19
 */



int main()
{
	int a, b, c;                     //a,b,c????
	for (a = 1; a <= 3; a++)         //1,2,3??????
		for (b = 1; b <= 3; b++)
			for (c = 1; c <= 3; c++)
				if (((a < b) + (c == a) == 3 - a)   //???????????
					&&((a > b) + (a > c) == 3 - b)
					&&((c > b) + (b > a) == 3 - c));
					if (a > b)                //?a,b,c????????
					{
						if (b > c)
							cout << "ABC";
						else if (c > a) 
							cout << "CAB";
						else 
							cout << "ACB";
					}
					else 
					{
						if (a > c)
							cout << "BAC";
						else if (c > b)
							cout << "CBA";
						else 
							cout << "BCA";
					}
	cout << endl;

	return 0;
}