int main()
{
	int A,B,C,D,E;
	int a1,a2,a3,a4,a5;
	for(A=1;A<=5;A++)
		for(B=1;B<=5;B++)
			for(C=1;C<=5;C++)
				for(D=1;D<=5;D++)
					for(E=1;E<=5;E++)
					{
						if(A==B||A==C||A==D||A==E||B==C||B==D||B==E||C==D||C==E||D==E||D==1) 
							continue;
					  a1=((E==1)&&(A==2));
					  a2=((B==2)&&(E!=3));
					  a3=((A==5)&&((C==1)||(C==2))&&(E!=2)&&(E!=3));
					  a4=((C!=1)&&((D==1)||(D==2))&&(E!=2)&&(E!=3));
					  a5=((D==1)&&(E==2)&&(E!=2)&&(E!=3));
					 
					  if(a1+a2+a3+a4+a5==2)
					  {
						  cout<<A<<' '<<B<<' '<<C<<' '<<D<<' '<<E<<endl;
						  break;
					  }
					}
	return 0;
}