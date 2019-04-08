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
	int i = 0, j = 0, k = 0, a = 0, b = 0, c = 0, A, B, C;
	for(i = 0; i <= 2; i++)
	{
		for(j = 0; j <= 2; j++)
		{
			if(i == j)
			{
				continue;
			}
			else
			{
				for(k = 0; k <= 2; k++)
				{
					if(k == i || k == j)
					{
						continue;
					}
					else
					{
						A = i; B = j; C = k;
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