/*??????
  ??????1200012829
  ???2012.10.10*/
int main ()
{
	int z, q, s, l, x1, x2, x3;
	for ( z = 10; z <= 50; z = z + 10)
	{
		for ( q =10; q <= 50; q = q + 10 )
		{
			for ( s = 10; s <= 50; s = s + 10)
			{
				for ( l = 10; l <= 50; l = l + 10 )
				{
					x1 = ( z + q == s + l );
					x2 = ( z + l > s + q );
					x3 = ( z + s < q );
					if ( x1 + x2 + x3 == 3 )
					{
						cout << 'l' << ' ' << l << endl;
						cout << 'q' << ' ' << q << endl;
						cout << 'z' << ' ' << z << endl;
						cout << 's' << ' ' << s << endl;
					
					}
				}
			}
		}
	}
	return 0;
}

