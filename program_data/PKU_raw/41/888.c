int main()
{
	int A,B,C,D,E,AS,CS,DS,ES;
	for(A=1;A<=5;A++)
	{
		for(B=1;B<=2;B++)
		{
			if(B==A)continue;
			for(C=1;C<=5;C++)
			{
				if(C==A||C==B)continue;
				for(D=1;D<=5;D++)
				{
					if(D==A||D==B||D==C)continue;
					for(E=1;E<=5;E++)
					{
						if(E==A||E==B||E==C||E==D||E==2||E==3)continue;
						AS=(E==1);
						CS=(A==5);
						DS=(C!=1);
						ES=(D==1);
						if((B==1&&A==2&&AS==1&&CS==0&&DS==0&&ES==0)||(B==1&&C==2&&CS==1&&AS==0&&DS==0&&ES==0)||(B==1&&D==2&&DS==1&&CS==0&&DS==0&&ES==0)||(B==2&&A==1&&AS==1&&CS==0&&DS==0&&ES==0)||(B==2&&C==1&&CS==1&&AS==0&&DS==0&&ES==0)||(B==2&&D==1&&DS==1&&CS==0&&AS==0&&ES==0)||(B==2&&E==1&&ES==1&&CS==0&&DS==0&&AS==0))
							cout << A << " " << B << " " << C << " " << D << " " << E << endl;

					}
				}
			}
		}
	}
	return 0;
}
						