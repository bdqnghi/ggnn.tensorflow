//**??????*****************//
//**?????*******************//
//##???11/17##################//
int main()
{
	int a1, a2, b1, b2, c1, c2, A, B, C, i, j, k;//A?B?C???A?B?C???

	for(i = 0; i <= 2; i++)
	{
		A = i;
	    for(j = 0; j <= 2; j++)
		{
			B = j;
            for(k = 0; k <= 2; k++)                                                        //??
			{
				 C = k;
				a1 = B > A;
				a2 = C == A;
				b1 = A > B;
				b2 = A > C;
				c1 = C > B;
				c2 = B > A;
			    if(A + a1 + a2 == B + b1 + b2 && B + b1 + b2 == C + c1 + c2)//??????????
		        {
					if(A > B && B > C)cout << "CBA";
					if(A > C && C > B)cout << "BCA";
					if(B > A && A > C)cout << "CAB";
					if(B > C && C > A)cout << "ACB";
					if(C > A && A > B)cout << "BAC";
					if(C > B && B > A)cout << "ABC";
				}
			}
		}
	 }

	return 0;
}