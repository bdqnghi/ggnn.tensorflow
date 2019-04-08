//***********************
//??????
//?????
//???2011.10.16
//***********************
int main()          //???
{                 //?????
	int a, b, c;         //????A?B?C???
	a = 3;                //???????????
	b = 2;
	c = 1;
	if((b <= a && c != a) + (a > b || a > c) + (c > b && b > a) == 3) 
		cout << "CBA";
	else 
	{
		a = 3;
	    b = 1;
	    c = 2;
	    if((b <= a && c != a) + (a > b && a > c) + (c > b || b > a) == 3)
			cout << "BCA";
		else
		{
			a = 2;
	        b = 1;
          	c = 3;
            if((b > a || c == a) + (a > b && a > c) + (c <= b && b <= a) == 3)
		        cout << "BAC";
			else
			{
				a = 2;
             	b = 3;
	            c = 1;
                if((b > a || c == a) + (a <= b && a <= c) + (c > b && b > a) == 3)
		            cout << "CAB";
				else
				{
					a = 1;
	                b = 2;
	                c = 3;
                    if((b > a && c == a) + (a <= b || a <= c) + (c <= b && b <= a) == 3)
		                cout << "ABC";
					else
					{
						a = 1;
	                    b = 3;
	                    c = 2;
                        if((b > a && c == a) + (a <= b && a <= c) + (c <= b || b <= a) == 3)
	                     	cout << "ACB";
					}
				}
			}
		}
	}
	return 0;
}          //?????