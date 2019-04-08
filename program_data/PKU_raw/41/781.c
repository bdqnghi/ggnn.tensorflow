int main()
{
	int a,b,c,d,e,A,B,C,D,E;
	for(A=1;A<=5;A++)
		for( B=1;B<=5;B++)
		{if(A==B) continue;
		for( C=1;C<=5;C++)
		{if(C==B||C==A) continue;
		for( D=1;D<=5;D++)
		{if(D==A||D==B||D==C) continue;
		for( E=1;E<=5;E++)
		{if(E==A||E==B||E==C||E==D) continue;
		a=(E==1);
			b=(B==2);
			c=(A==5);
			d=(C!=1);
			e=(D==1);
		if((a+b+c+d+e==2)&&((A-a<2)+(B-b<2)+(C-c<2)+(D-d<2)+(E-e<2)==2)&&((A-a<1)+(B-b<1)+(C-c<1)+(D-d<1)+(E-e<1)==1)&&(E!=2)&&(E!=3))
			cout<<A<<' '<<B<<' '<<C<<' '<<D<<' '<<E;

		}

		}

		}

		}
	return 0;
}
