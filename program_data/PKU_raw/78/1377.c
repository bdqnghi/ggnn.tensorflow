int main()
{
	int a[4], z, q, s, l, i, j, k, m;
	for(i = 1; i < 6; i++)
		for(j = 1; j < 6; j++)
			if(j != i)
				for(k = 1; k < 6; k++)
					if(k != i && k != j)
						for(m = 1; m < 6; m++)
							if(m != k && m != i && m != j)
							{
								a[0] = 10 * i;
								a[1] = 10 * j;
								a[2] = 10 * k;
								a[3] = 10 * m;
								if(a[0] + a[1] == a[2] + a[3] && a[0] + a[3] > a[1] + a[2] && a[0] + a[2] < a[1])
								{
									for(i = 0; i < 4; i++)
										if(a[i] == 50)
										{
											if(i == 0)
												cout << "z" << " " << "50" << endl;
											if(i == 1)
												cout << "q" << " " << "50" << endl;
											if(i == 2)
												cout << "s" << " " << "50" << endl;
											if(i == 3)
												cout << "l" << " " << "50" << endl;
										}
									for(i = 0; i < 4; i++)
										if(a[i] == 40)
										{
											if(i == 0)
												cout << "z" << " " << "40" << endl;
											if(i == 1)
												cout << "q" << " " << "40" << endl;
											if(i == 2)
												cout << "s" << " " << "40" << endl;
											if(i == 3)
												cout << "l" << " " << "40" << endl;
										}
									for(i = 0; i < 4; i++)
										if(a[i] == 30)
										{
											if(i == 0)
												cout << "z" << " " << "30" << endl;
											if(i == 1)
												cout << "q" << " " << "30" << endl;
											if(i == 2)
												cout << "s" << " " << "30" << endl;
											if(i == 3)
												cout << "l" << " " << "30" << endl;
										}
									for(i = 0; i < 4; i++)
										if(a[i] == 20)
										{
											if(i == 0)
												cout << "z" << " " << "20" << endl;
											if(i == 1)
												cout << "q" << " " << "20" << endl;
											if(i == 2)
												cout << "s" << " " << "20" << endl;
											if(i == 3)
												cout << "l" << " " << "20" << endl;
										}
									for(i = 0; i < 4; i++)
										if(a[i] == 10)
										{
											if(i == 0)
												cout << "z" << " " << "10" << endl;
											if(i == 1)
												cout << "q" << " " << "10" << endl;
											if(i == 2)
												cout << "s" << " " << "10" << endl;
											if(i == 3)
												cout << "l" << " " << "10" << endl;
										}


								}
							}
	return 0;
}