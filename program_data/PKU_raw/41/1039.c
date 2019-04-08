
int main() {
	int A,B,C,D,E;
	int a,b,c,d,e;
	for(A=1;A<=5;A++)
		for(B=1;B<=5;B++)
			for(C=1;C<=5;C++)
				for(D=1;D<=5;D++)
					for(E=1;E<=5;E++){
						if(E==2||E==3)continue;//E??2?3
							if(A!=B && A!=C && A!=D && A!=E && B!=C && B!=D && C!=D && B!=E && C!=E && D!=E){
								//??????
								a=(E==1);
								b=(B==2);
								c=(A==5);
								d=(C!=1);
								e=(D==1);
								if(a==1)
									if(A!=1&&A!=2)continue;
								if(b==1)
									if(B!=1&&B!=2)continue;
								if(c==1)
									if(C!=1&&C!=2)continue;
								if(d==1)
									if(D!=1&&D!=2)continue;
								if(e==1)
									if(E!=1&&E!=2)continue;				//??????????????????
								if(a+b+c+d+e==2)						//??????????
								cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;
							}
					}


	return 0;
}
