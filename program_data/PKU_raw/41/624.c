int main()
{
	int A,B,C,D,E;
	int word[6];
	for(A=1;A<=5;A++){
		for(E=4;E<=5;E++){
			if(E==A)continue;
		for(B=1;B<=5;B++){
			if(B==A||B==E)continue;
			for(C=1;C<=5;C++){
			if(C==A||C==B||C==E)continue;
			D=15-A-B-C-E;
			word[A]=(E==1);
			word[B]=(B==2);
			word[C]=(A==5);
			word[D]=(C!=1);
			word[E]=(D==1);
			if(word[1]+word[2]==2&&word[3]+word[4]+word[5]==0)
			{cout<<A<<' '<<B<<' '<<C<<' '<<D<<' '<<E<<endl;
			}
			}}}}
	return 0;
}