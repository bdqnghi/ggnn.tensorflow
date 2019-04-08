int main()
{
	int z, q, s, l;
	for (z = 1; z<= 5; z ++)
		for (q = 1; q<= 5; q ++)
			for (s = 1; s<= 5; s ++)
				for (l = 1; l<= 5; l ++)
				{
					if(z + q == s +l &&
					   z + l > s + q &&
					   z + s < q)
					   cout << "l " << l * 10 << '\n' 
					        << "q " << q * 10 << '\n'
							<< "z " << z * 10 << '\n' 
		                    << "s " << s * 10 << endl;
				}
	return 0;
}
