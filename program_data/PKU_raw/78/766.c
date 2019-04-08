int main()
{
	int z, q, s, l;
	int C1, C2, C3;
	l = 50;
	q = 40;
	for(z = 10; z <= 30; z += 10)
		for(s = 10; s <= 30; s += 10)
		{
			C1 = (z + q) == (s + l);
			C2 = (z + l) > (s + q);
			C3 = (z + s) < q;
			if(C1&&C2&&C3&&(z != s))
				cout << "l " << l << endl << "q " << q << endl << "z " << z << endl << "s " << s << endl; 
		}
	return 0;
}