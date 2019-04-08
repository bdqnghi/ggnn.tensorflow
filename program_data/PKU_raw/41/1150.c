int main()
{
	int A=0,B=0,C=0,D=0,E=0;//???????
	int As=0,Bs=0,Cs=0,Ds=0,Es=0;//???????
	int flag=0;//???????
	for(A=1;A<=5;A++)
		for(B=1;B<=5;B++)
			if(B!=A)
				for(C=1;C<=5;C++)
					if(C!=A&&C!=B)
						for(D=1;D<=5;D++)
							if(D!=A&&D!=B&&D!=C)
								for(E=1;E<=5;E++)
									if(E!=A&&E!=B&&E!=C&&E!=D&&E!=2&&E!=3)
									{
										As=(E==1);//A???????E???????
										Bs=(B==2);//B?????????????????
										Cs=(A==5);//C???????A????????
										Ds=(C!=1);//D???????C?????????
										Es=(D==1);//E???????D??????????
										flag=As+Bs+Cs+Ds+Es;
										/*cout<<A<<B<<C<<D<<E<<" ";
										cout<<As<<Bs<<Cs<<Ds<<Es<<" ";
										cout<<flag;
										cout<<endl;*/
										if(flag==2&&A==1&&B==2&&As==1&&Bs==1)
											cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;
										if(flag==2&&A==2&&B==1&&As==1&&Bs==1)
											cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;

										if(flag==2&&A==1&&C==2&&As==1&&Cs==1)
											cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;
										if(flag==2&&A==2&&C==1&&As==1&&Cs==1)
											cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;

										if(flag==2&&A==1&&D==2&&As==1&&Ds==1)
											cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;
										if(flag==2&&A==2&&D==1&&As==1&&Ds==1)
											cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;

										if(flag==2&&A==1&&E==2&&As==1&&Es==1)
											cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;
										if(flag==2&&A==2&&E==1&&As==1&&Es==1)
											cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;

										if(flag==2&&B==1&&C==2&&Bs==1&&Cs==1)
											cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;
										if(flag==2&&B==2&&C==1&&Bs==1&&Cs==1)
											cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;


										if(flag==2&&B==1&&D==2&&Bs==1&&Ds==1)
											cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;
										if(flag==2&&B==2&&D==1&&Bs==1&&Ds==1)
											cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;

										if(flag==2&&B==1&&E==2&&Bs==1&&Es==1)
										    cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;
										if(flag==2&&B==2&&E==1&&Bs==1&&Es==1)
											cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;

										if(flag==2&&C==1&&D==2&&Cs==1&&Ds==1)
											cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;
										if(flag==2&&C==2&&D==1&&Cs==1&&Ds==1)
											cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;

										if(flag==2&&C==1&&E==2&&Cs==1&&Es==1)
											cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;
										if(flag==2&&C==2&&E==1&&Cs==1&&Es==1)
											cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;

										if(flag==2&&D==1&&E==2&&Ds==1&&Es==1)
											cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;
										if(flag==2&&D==2&&E==1&&Ds==1&&Es==1)
											cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;
									}

	return 0;
}
