int main()
{
	int Z, Q, S, L, z, q, s, l, k;
	for (Z = 1; Z <= 5; Z++)
	for (Q = 1; Q <= 5; Q++)
	for (S = 1; S <= 5; S++)
	for (L = 1; L <= 5; L++)
	{
		if ((Z + Q == S + L) && (Z + L > S + Q) && (Z + S < Q) && ((Z - Q) * (Z - S) * (Z - L) * (Q - S) * (Q - L) * (S - L) != 0))
		{
			z = Z;
			q = Q;
			s = S;
			l = L;
			break;
		}
	}
	k = 1;
	while (k <= 4)
	{
		k = k + 1;
		if (z > q && z > s && z > l)
		{
			cout << "z " << 10 * z << endl;
			z = 0;
			continue;
		}
		if (q > z && q > s && q > l)
		{
			cout << "q " << 10 * q << endl;
			q = 0;
			continue;
		}
		if (s > z && s > q && s > l)
		{
			cout << "s " << 10 * s << endl;
			S = 0;
			continue;
		}
		if (l > z && l > q && l > s)
		{
			cout << "l " << 10 * l << endl;
			l = 0;
			continue;
		}
	}
	return 0;
}