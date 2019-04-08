int main()
{
    int z, q, s, l;
	for(z = 10; z <= 40; z = z + 10)
		for(q = 10; q <= 50; q = q + 10)
			for(s = 10; s <= 40; s = s + 10)
				for(l = 10; l <= 50; l = l + 10)
					if((((z + q) == (s + l))&&((z + l) > (s+ q))&&((z + s) < q)) == 1)
					{
						if(z > s)
							cout << "l " << l << endl << "q " << q << endl << "z " << z << endl << "s " << s << endl;
						else
							cout << "l " << l << endl << "q " << q << endl << "s " << s << endl << "z " << z << endl;
					}
	return 0;
}

