int main()
{
	int A,B,C,D,E,y=0;
	for(int A=1;A<=5;A++)
		for(int B=1;B<=5;B++)
			for(int C=1;C<=5;C++)
				for(int D=1;D<=5;D++)
					for(int E=1;E<=5;E++)
					{	if(A!=B&&A!=C&&A!=D&&A!=E&&B!=C&&B!=D&&B!=E&&C!=D&&C!=E&&D!=E&&E!=2&&E!=3)
						{
							y=0;
							if ( ( (A==1||A==2) && E==1 )==1) y=y+1;
							else if ( A!=1 && A!=2 && E!=1) y=y+1;
							if( ( (B==1||B==2) && B==2 )==1) y=y+1;
							else if ( B!=1 && B!=2 &&B!=2) y=y+1;
							if( ( (C==1||C==2) && A==5 )==1) y=y+1;
							else if ( C!=1 && C!=2 && A!=5) y=y+1;
							if( ( (D==1||D==2) && C!=1 )==1) y=y+1;
							else if ( D!=1 && D!=2 && C==1) y=y+1;
							if( ( (E==1||E==2) && D==1 )==1) y=y+1;
							else if ( E!=1 && E!=2 && D!=1) y=y+1;
							if (y==5)  	cout<< A <<' '<< B <<' '<< C <<' '<< D <<' '<<E<<endl;
						}
					}



return 0;
}