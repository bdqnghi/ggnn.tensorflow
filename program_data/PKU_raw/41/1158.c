/*
??:???
??:1300012974
??:????
*/
int main()
{
	int A, B, C, D, E, a, b, c, d, e;
	for(A=1;A<6;A++)
	{
		for(B=1;B<6;B++)
		{
			if(B==A)continue;
			for(C=1;C<6;C++)
			{if(C==A||C==B)continue;
				for(D=1;D<6;D++)
				{if(D==A||D==B||D==C)continue;
					for(E=1;E<6;E++)
					{if(E==A||E==B||E==C||E==D)continue;
						if(E==2||E==3)continue;
						a=(E==1);
						b=(B==2);
						c=(A==5);
						d=(C!=1);
						e=(D==1);
						if(a+b+c+d+e==2)
						{
							if(A==1||A==2)
								if(E!=1)break;
							if(B==1||B==2)
								if(B!=2)break;
							if(C==1||C==2)
								if(A!=5)break;
							if(D==1||D==2)
								if(C==1)break;
							if(E==1||E==2)
								if(D!=1)break;
							cout <<A << " "<< B<< " " <<C <<" "<<D<<" "<<E;
						}
					}
				}
			}
		}
	}

	



	return 0;
}