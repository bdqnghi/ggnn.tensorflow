int main()
{
	int A, B, C, a, b, c, i, As, Bs, Cs;
	char s[3];
	for(A = 0; A < 3; A++)
		for(B = 0; B < 3; B++)
			for(C = 0; C < 3; C++)
			{
	                           As = (B > A) + (C == A);
	                           Bs = (A > B) + (A > C);
	                           Cs = (C > B) + (B > A);
				a = (A > B && As < Bs) || (A == B && As == Bs) || (A < B && As > Bs);
				b = (A > C && As < Cs) || (A == C && As == Cs) || (A < C && As > Cs);
				c = (B > C && Bs < Cs) || (B == C && Bs == Cs) || (B < C && Bs > Cs);
				if(a + b + c == 3)
				{
					s[A] = 'A';
					s[B] = 'B';
					s[C] = 'C';
					for(i = 0; i < 3; i++)
					{
						cout<<s[i];
					}
					cout<<endl;
				}
			}
			return 0;
}
