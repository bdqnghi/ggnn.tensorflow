int main ()
{
	int A,B,C,D,E;
	for(A=1;A<=5;A++)
		for(B=1;B<=5;B++)
			for(C=1;C<=5;C++)
				for(D=1;D<=5;D++)
				{
					E=15-A-B-C-D;
					if(E!=2&&E!=3&&A!=B&&A!=C&&A!=D&&A!=E&&C!=B&&D!=B&&E!=B&&C!=D&&C!=E&&D!=E)
					{
						if(A==2&&E!=1)
							continue;
						if(C==1||C==2)
							if(A!=5)
								continue;
						if(D==1||D==2)
							if(C==1)
								continue;
						if(E==1||E==2)
							if(D!=1)
								continue;
						if(A==1)
							continue;
						if(B==1&&B!=2)
							continue;


						if(((E==1)+(B==2)+(A==5)+(C!=1)+(D==1))==2)
						{
							cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;
					}	}


				}


	return 0;
}