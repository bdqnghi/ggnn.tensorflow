int main()
{
	int A, B, C, a, b, c;
	for (A = 1; A <= 3; A++)
		for (B = 1; B <= 3; B++)
			for (C = 1; C <= 3; C++)
			{
				a = (B > A) + (C == A);
				b = (A > B) + (A > C);
				c = (C > B) + (B > A);
				if (A==3-a && B==3-b && C == 3-c && A!=B&&B!=C&&A!=C)
				{

	for (int i=1; i <=3; i++) {
		if (i == A)
			cout << "A";
		if (i == B)
			cout << "B";
		if (i == C)
			cout << "C";
	}}}

	return 0;
}
