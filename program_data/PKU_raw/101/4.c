/**
  *file  ???
  *author ???
  *date   11.17
  *function 3?????????????? 
			A??B??????C??????? 
			B??A??????A??C??? 
			C????B????B?A???? 
			????????????????????? 
			???????????3??????
*/
int main()
{
	int a = 0, b = 0, c = 0, A, B, C;
	for(A = 0; A <= 2; A++)
	{
		for(B = 0; B <= 2; B++)
		{
			if(B == A)
			{
				continue;
			}
			else
			{
				for(C = 0; C <= 2; C++)
				{
					if(C == A || C == B)
					{
						continue;
					}
					else
					{
						a = (B > A) + (A == C);
						b = (A > B) + (A > C);
						c = (C > B) + (B > A);
						if(a + A == 2 && b + B == 2 && c + C == 2)
						{
							if(A > B > C)
							{
								cout << "CBA" << endl;
							}
							if(A > C > B)
							{
								cout << "BCA" << endl;
							}							
							if(B > A > C)
							{
								cout << "CAB" << endl;
							}							
							if(B > C > A)
							{
								cout << "ACB" << endl;
							}							
							if(C > B > A)
							{
								cout << "CBA" << endl;
							}							
							if(C > A > B)
							{
								cout << "BCA" << endl;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}