//*************************************
//*  ???                           *
//*  ??????                     *
//*  ?????2011?10?18?         *
//*************************************
int main()
{
	int A , B , C;//ABC??????????
	int a , b , c;//abc??????????
	for(A = 1;A <= 3;A = A + 1)
		for(B = 1;B <= 3;B = B + 1)
			for(C = 1;C <= 3;C = C + 1)//???????123???
			{
				a = (B > A) + (C == A);
				b = (A > B) + (A > C);
				c = (C > B) + (B > A);
				if(a + A == 3 && b + B == 3 && c + C == 3 
					&& A != B && A != C && B != C)
					//??????????????????,???????
				{
					if(a > b && b > c)
						cout << "A" << "B" << "C" << endl;
					else if(a > c && c > b)
						cout << "A" << "C" << "B" << endl;
					else if(b > a && a > c)
						cout << "B" << "A" << "C" << endl;
					else if(b > c && c > a)
						cout << "B" << "C" << "A" << endl;
					else if(c > a && a > b)
						cout << "C" << "A" << "B" << endl;
					else
						cout << "C" << "B" << "A" << endl;//??????????
				}
			}
			return 0;
}