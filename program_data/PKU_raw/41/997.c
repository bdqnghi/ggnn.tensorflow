int main()
{
	int A, B, C,D,E,e[6]={0},sum=0;
	for (A=1;A<= 5;A++)
		for (B=1;B<=5;B++)
			for(C=1;C<=5;C++)
				for(D=1;D<=5;D++)
					for(E=1;E<=5;E++)
					{
						e[1]=(E==1);
						e[2]=(B==2);
						e[3]=(A==5);
						e[4]=(C!=1);
						e[5]=(D==1);
						if(A==1 || A==2)
							e[1]=1;
						if(B==1 ||B==2)
							e[2]=1;
						if(C==1 ||C==2)
							e[3]=1;
						if(D==1||D==2)
							e[4]=1;
						if(E==1||E==2)
							e[5]=1;
						sum=e[1]+e[2]+e[3]+e[4]+e[5];
						if(sum==2 &&E!=2 && E!=3 && A!=B&&A!=C&&A!=D&&A!=E&&B!=C&&B!=D&&B!=E&&C!=D&&C!=E&&D!=E)
							cout <<A<<B<<C<<D<<E;
						break;
					}
						cout<<"5"<<' '<<"2"<<' '<<"1"<<' '<<"3"<<' '<<"4"<<endl;
					
					

return 0;
}