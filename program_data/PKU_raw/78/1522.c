int main ()
{
	int sum = 0;																	//?????? 
	char zz = 'z', qq = 'q', ss = 's', ll = 'l';									//?????????? 
	int z = 0, q = 0, s = 0, l = 0;													//??????? 
	for ( z = 10; z < 50; z = z + 10)
		for ( q = 10; q <= 50; q = q + 10)
			for ( s = 10; s <= 50; s = s + 10)
				for ( l = 10; l <= 50; l = l + 10)
				{
					sum = ( z + q == s + l ) + ( z + l > s + q ) + ( z + s < q );
					if ( sum == 3 && z != q != s != l )
					{
						if ( z == 50 ) cout << zz << " " << z << endl;
						if ( q == 50 ) cout << qq << " " << q << endl;
						if ( s == 50 ) cout << ss << " " << s << endl;
						if ( l == 50 ) cout << ll << " " << l << endl;
						if ( z == 40 ) cout << zz << " " << z << endl;
						if ( q == 40 ) cout << qq << " " << q << endl;
						if ( s == 40 ) cout << ss << " " << s << endl;
						if ( l == 40 ) cout << ll << " " << l << endl;
						if ( z == 30 ) cout << zz << " " << z << endl;
						if ( q == 30 ) cout << qq << " " << q << endl;
						if ( s == 30 ) cout << ss << " " << s << endl;
						if ( l == 30 ) cout << ll << " " << l << endl;
						if ( z == 20 ) cout << zz << " " << z << endl;
						if ( q == 20 ) cout << qq << " " << q << endl;
						if ( s == 20 ) cout << ss << " " << s << endl;
						if ( l == 20 ) cout << ll << " " << l << endl;
						if ( z == 10 ) cout << zz << " " << z << endl;
						if ( q == 10 ) cout << qq << " " << q << endl;
						if ( s == 10 ) cout << ss << " " << s << endl;
						if ( l == 10 ) cout << ll << " " << l << endl;
					}
				}
	return 0;
}