int main()
{
	int A, B, C, a, b, c;
	for(A = 0; A < 3; A ++)
	{
		for(B = 0; B < 3; B ++ )
		{
			if( B == A) continue;
			C = 3 - A - B;
		
	
		a = (B > A) + (C == A);
		b = (A > B) + (A > C);
		c = (C > B) + (B > A);
		if((A + a) == 2 && (B + b) == 2 && (C + c) == 2)
		{
			if(A > B && B > C)
				cout << "CAB" << endl;
			if(B > A && A > C)
				cout << "CAB" << endl;
			if(C > A && A > B)
				cout << "BAC" << endl;	
			if(A > C && C > B)
				cout << "BCA" << endl;
			if(B > C && C > A)
				cout << "ACB" << endl;
			if(C > B && B > A)
				cout << "ABC" << endl;
		}
		}
	}
		return 0;
}



