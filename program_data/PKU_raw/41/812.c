int main()
{
	int A,B,C,D,E;
	for(A=1;A<=5;A++)
	{
		B=1;
		for(B=1;B<=5;B++)
		{
			C=1;
			if(A==B)continue;
			for(C=1;C<=5;C++)
			{
				D=1;
				if(A==C||B==C)continue;
				for(D=1;D<=5;D++)
				{
					E=1;
					if(A==D||B==D||C==D)continue;
					for(E=1;E<=5;E++)
					{
						if(A==E||B==E||C==E||D==E||E==2||E==3)continue;
						if((((A==1||A==2)==(E==1))&&((B==1||B==2)==(B==2))&&((C==1||C==2)==(A==5))&&((D==1||D==2)==(C!=1))&&((E==1||E==2)==(D==1))))
						{
							cout<<A<<' '<<B<<' '<<C<<' '<<D<<' '<<E;
							return 0;
						}
					}
				}
			}

		}
	}
	return 0;
}
