int main()
{
	int A, B, C, D, E;
	for (A=1; A<=5; A++)
	{
		for (B=1; B<=5; B++)
		{
			if (B==A)
				continue;
			else
			{
				for (C=1; C<=5; C++)
				{
		        	if (C==A || C==B)
				    continue;
			        else
					{
						for (D=1; D<=5; D++)
						{
		        	        if (D==A || D==B || D==C)
				             continue;
			                else
							{
								for (E=1; E<=5; E++)
								{
		        	                 if (E==2 || E==3 ||E==A || E==B || E==C || E==D)
				                       continue;
			                          else
									  {
										  if ( (A==1 || A==2) + (E !=1)==1)
										  {
											  if ((B==1 || B==2) + (B!=2)==1)
											  {
												  if ((C==1||C==2) +(A!=5)==1)
												  {
													  if ((D==1||D==2)+ (C==1)==1)
													  {
														  if ((E==1||E==2)+ (D!=1)==1)
														  {
															  cout << A << " "<<B << " "<<C << " "<<D<< " "<<E <<endl;
														  }
													  }
												  }
											  }
										  }
									  }
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
