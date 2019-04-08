int main()
{
	char h1, h2, h3, h4;
	int zhao, qian, sun, li, a, b, c, m1, m2, m3, m4;
	for ( int z = 1; z <= 5; z ++ )
		for ( int q = 1; q <= 5; q ++ )
			for ( int s = 1; s <= 5; s ++ )
				for ( int l = 1; l <= 5; l ++ )
				{
					zhao = z * 10;
					qian = q * 10;
					sun = s * 10;
					li = l * 10;
					a = ( zhao + qian ) == ( sun + li );
					b = ( zhao + li ) > ( sun + qian );
					c = ( zhao + sun ) < qian;
					if ( a == 1 && b == 1 && c == 1 )
					{
						if ( li > qian )
						{
							h1 = 'l';
							h2 = 'q';
							m1 = li; m2 = qian;
							if ( zhao > sun )
							{
								h3 = 'z'; h4 = 's';
								m3 = zhao; m4 = sun;
							}
							else
							{
								h3 = 's'; h4 = 'z';
								m3 = sun; m4 = zhao;
							}
						}
						else
						{
							h1 = 'q';
							m1 = qian;
							if ( ( zhao > sun ) && ( zhao > li ) )
							{
								h2 = 'z'; m2 = zhao;
								if ( sun > li )
								{
									h3 = 's';
									h4 = 'l';
									m3 = sun; m4 = li;
								}
								else
								{
									h3 = 'l'; h4 = 's';
									m3 = li; m4 = sun;
								}
							}
							if ( ( sun > zhao ) && ( sun > li ) )
							{
								h2 = 's'; m2 = sun;
								if ( zhao > li )
								{
									h3 = 'z'; h4 = 'l';
									m3 = zhao; m4 = li;
								}
								else
								{
									h3 = 'l'; h4 = 'z';
									m3 = li; m4 = zhao;
								}
							}
							if ( ( li > zhao ) && ( li > sun ) )
							{
								h2 = 'l'; m2 = li;
								if ( zhao > sun )
								{
									h3 = 'z'; h4 = 's';
									m3 = zhao; m4 = sun;
								}
								else
								{
									h3 = 's'; h4 = 'z';
									m3 = sun; m4 = zhao;
								}
							}
						}
						cout << h1 << " " << m1 << endl;
						cout << h2 << " " << m2 << endl;
						cout << h3 << " " << m3 << endl;
						cout << h4 << " " << m4 << endl;
					}
				}
}