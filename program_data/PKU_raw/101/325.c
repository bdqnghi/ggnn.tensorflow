//Name:    ???      #
//Author:   ??       #
//Number: 1000062710   #
//Date:  2010?11?23?#
//######################
int main()
{
	int a,b,c,A = 0,B = 0,C = 0;
	while(1)
	{
		A = 1;
		B = 2;
		C = 3;
		a = (B > A) + (C == A);
	    b = (A > B) + (A > C);
	    c = (C > B) + (B > A);
		if((a == 2)&&(b == 1)&&(c == 0))
			cout << "ABC" << endl;
		break;
	}
	while(1)
	{
		A = 1;
		B = 3;
		C = 2;
		a = (B > A) + (C == A);
	    b = (A > B) + (A > C);
	    c = (C > B) + (B > A);
		if((a == 2)&&(c == 1)&&(b == 0))
			cout << "ACB" << endl;
		break;
	}
	while(1)
	{
		B = 1;
		A = 2;
		C = 3;
		a = (B > A) + (C == A);
	    b = (A > B) + (A > C);
	    c = (C > B) + (B > A);
		if((b == 2)&&(a == 1)&&(c == 0))
			cout << "BAC" << endl;
		break;
	}
	while(1)
	{
		B = 1;
		C = 2;
		A = 3;
		a = (B > A) + (C == A);
	    b = (A > B) + (A > C);
	    c = (C > B) + (B > A);

		if((b == 2)&&(c == 1)&&(a == 0))
			cout << "BCA" << endl;
		break;
	}
	while(1)
	{
		C = 1;
		B = 2;
		A = 3;
		a = (B > A) + (C == A);
	    b = (A > B) + (A > C);
	    c = (C > B) + (B > A);
		if((c == 2)&&(b == 1)&&(a == 0))
			cout << "CBA" << endl;
		break;
	}
	while(1)
	{
		C = 1;
		A = 2;
		B = 3;
		a = (B > A) + (C == A);
	    b = (A > B) + (A > C);
	    c = (C > B) + (B > A);
		if((c == 2)&&(a == 1)&&(b == 0))
			cout << "CAB" << endl;
		break;
	}
		return 0;
}