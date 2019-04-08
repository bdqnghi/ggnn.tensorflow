

int main()
{
	int i, j, k;
	int gue[5];
	int qual[5];

	for ( qual[0] = 1; qual[0] <= 5; qual[0]++ )
		for ( qual[1] = 1; qual[1] <= 5; qual[1]++ )
			for ( qual[2] = 1; qual[2] <= 5; qual[2]++ )
				for ( qual[3] = 1; qual[3] <= 5; qual[3]++ )
					for ( qual[4] = 1; qual[4] <= 5; qual[4]++ )
					{
						gue[0] = ( qual[4] == 1 );
						gue[1] = ( qual[1] == 2 );
						gue[2] = ( qual[0] == 5 );
						gue[3] = ( qual[2] != 1 );
						gue[4] = ( qual[3] == 1 );
						if ( qual[0] != qual[1] && qual[0]!= qual[2] && qual[0]!= qual[3] && qual[0]!= qual[4] )
							if ( qual[1] != qual[2] && qual[1] != qual[3] && qual[1] != qual[4] )
								if ( qual[2] != qual[3] && qual[2] != qual[4] )
									if ( qual[3] != qual[4] )
										if ( qual[4] != 2 && qual[4] != 3 )
									{
										for ( i = 0;i < 4; i++ )
											for ( j = i+1; j < 5;j++ )
										{
											if ( gue[i] == 1 && gue[j] == 1 && gue[0]+gue[1]+gue[2]+gue[3]+gue[4] == 2 )
												if (( qual[i] == 1 && qual [j] == 2)||( qual[j] == 1 && qual [i] == 2))
												{
													
													for (k = 0; k < 4;k++)
														cout << qual[k]<<" ";
													cout << qual[4];
												}
										}
									}
					}

	return 0;
}