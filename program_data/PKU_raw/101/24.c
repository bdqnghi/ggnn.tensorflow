//* * * * * * * * * * * * * * * * * * * * * * * * 
//*???????                               *
//*???????                               *
//*?????                                   *
//*???2010.11.17                             *
//* * * * * * * * * * * * * * * * * * * * * * * * 


int main()
{
	int A, B, C, AT, BT, CT, a, b, c;	//	????A,B,C?????AT,BT,CT?????????????a,b,c???

	for (A = 1; A <= 3; A++)
	{
		for (B = 1; B <= 3; B++)
		{
			for (C = 1; C <= 3; C++)
			{
				AT = (B > A) + (A == C);
				BT = (A > B) + (A > C);
				CT = (C > B) + (B > A);	//	??????????
				if ((AT <= BT) && (A <= B) || (BT <= CT) && (B <= C) || (CT <= AT) && (C <= A) ||
					(AT >= BT) && (A >= B) || (BT >= CT) && (B >= C) || (CT >= AT) && (C >= A))	
					continue;	//	?????????????
				a = AT;
				b = BT;
				c = CT;	//	????a,b,c???
		
			}
		}
	}
	if (a <= b && b <= c)
		cout << "CBA" << endl;
	else if (a >= b && b >= c)
		cout << "ABC" << endl;
	else if (a <= b && c <= a)
		cout << "BAC" << endl;
	else if (a >= b && c >= a)
		cout << "CAB" << endl;
	else if (b >= c && c >= a)
		cout << "BCA" << endl;
	else 
		cout << "ACB" << endl;	//	????????

	return 0;
}













