int main()
{
	int z,q,s,l;
	for(z = 1; z <= 5; z++)
		for(q = 1; q <= 5; q++)
			for(s = 1; s <= 5; s++)
				for(l = 1; l <= 5; l++)
				{
					if(z + q == s + l)
					{
						if(z + l > q + s)
						{
							if(z + s < q)
							{
								z = z * 10;
								l = l * 10;
								q = q * 10;
								s = s * 10;
                                if((z > q)&&(z > s)&&(z > l))
								{
									if((q > s)&&(q > l))
									{
										if(s > l)
											cout << "z " << z << endl << "q " << q << endl << "s " << s << endl << "l " << l;
										else
											cout << "z " << z << endl << "q " << q << endl << "l " << l << endl << "s " << s;
									}
									if((s > q)&&(s > l))
									{
										if(q > l)
											cout << "z " << z << endl << "s " << s << endl << "q " << q << endl << "l " << l;
										else
											cout << "z " << z << endl << "s " << s << endl << "l " << l << endl << "q " << q;
									}
									if((l > s)&&(l > q))
									{
										if(s > q)
											cout << "z " << z << endl << "l " << l << endl << "s " << s << endl << "q " << q;
										else
											cout << "z " << z << endl << "l " << l << endl << "q " << q << endl << "s " << s;
									}
								}
								if((q > z)&&(q > s)&&(q > l))
								{
									if((z > s)&&(z > l))
									{
										if(s > l)
											cout << "q " << q << endl << "z " << z << endl << "s " << s << endl << "l " << l;
										else
											cout << "q " << q << endl << "z " << z << endl << "l " << l << endl << "s " << s;
									}
									if((s > z)&&(s > l))
									{
										if(z > l)
											cout << "q " << q << endl << "s " << s << endl << "z " << z << endl << "l " << l;
										else
											cout << "q " << q << endl << "s " << s << endl << "l " << l << endl << "s " << s;
									}
									if((l > s)&&(l > z))
									{
										if(s > z)
											cout << "q "<< q<< endl << "l " << l << endl << "s " << s << endl << "z "<< z;
										else 
											cout << "q "<< q<< endl << "l " << l << endl << "z " << z << endl << "s " << s;	
									}
								}
                                if((s> q)&&(s> z)&&(s > l))
								{
									if((q > z)&&(q > l))
									{
										if(s > l)
											cout << "s " << s << endl << "q " << q << endl << "s " << s << endl << "l " << l;
										else
											cout << "s "<< s << endl << "q " << q << endl << "l " << l << endl << "s " << s;
									}
									if((z > q)&&(z > l))
									{
										if(q > l)
											cout << "s " << s << endl << "z " << z << endl << "q " << q << endl << "l " << l;
										else
											cout << "s " << s << endl << "z " << z << endl << "l " << l << endl << "q " << q;
									}
									if((l > z)&&(l > q))
									{
										if(s > q)
											cout << "s " << s << endl << "l " << l << endl << "z " << z << endl << "q " << q;
										else
											cout << "s " << s << endl << "l " << l << endl << "q " << q << endl << "z " << z;
									}
								}
                                if((l > q)&&(l > s)&&(l > z))
								{
									if((q > s)&&(q > z))
									{
										if(s > z)
											cout << "l " << l << endl << "q " << q << endl << "s " << s << endl << "z " << z;
										else
											cout << "l " << l << endl << "q " << q << endl << "z " << z << endl << "s " << s;
									}
									if((s > q)&&(s > z))
									{
										if(q > z)
											cout << "l " << l << endl << "s " << s << endl << "q " << q << endl << "z " << z;
										else
											cout << "l " << l << endl << "s " << s << endl << "z " << z << endl << "q " << q;
									}
									if((z > s)&&(z > q))
									{
										if(s > q)
											cout << "l " << l << endl << "z " << z << endl << "s " << s << endl << "q " << q;
										else
											cout << "l " << l << endl << "z " << z << endl << "q " << q << endl << "s  " << s;
									}
								}
							}
						}
					}
				}
    return 0;
}