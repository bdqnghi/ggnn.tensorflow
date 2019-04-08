int A, B, C, i, j, word[3];
char man[3];
int main()
{
	for(A = 0; A < 3; A++)
	for(B = 0; B < 3; B++)
	for(C = 0; C < 3; C++)
	{
		if(A != B && B != C && C != A)
		{
			word[A] = (B > A) + (A == C);
			word[B] = (A > B) + (A > C);
			word[C] = (C > B) + (B > A);
			man[A] = 'A';
			man[B] = 'B';
			man[C] = 'C';
			if(word[0] > word[1] > word[2])		
			{cout << man[0] << man[1] << man[2] << endl;}
		}
	}
	return 0;
}