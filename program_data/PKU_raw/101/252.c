//???
//2010?11?17?
//1000012753 ???
int main()
{
	int A = 0, B = 0, C = 0;
	for (A = 0; A <= 2; A++)
		for (B = 0; B <= 2; B++)
			for (C = 0; C <= 2; C++)
			{
				if (A != B && B != C && A != C)
				{
					if ((B > A) + (B == C) + A == 2
						&& (A > B) + (A > C) + B == 2
						&& (C > B) + (B > A) + C == 2)
					{
						char output[5];
						output[A] = 'A';
						output[B] = 'B';
						output[C] = 'C';
						output[3] = '\0';
						cout << output;
						cout << endl;
					}				
				}
			}

	return 0;
}