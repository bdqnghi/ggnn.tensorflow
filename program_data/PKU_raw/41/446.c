void main(){
	int A,B,C,D,E;
	int judge(int,int,int,int,int);
	for(E=1;E<6;E++) for(A=1;A<6;A++) for(B=1;B<6;B++) for(C=1;C<6;C++) for(D=1;D<6;D++)
		if(judge(A,B,C,D,E)) printf("%d %d %d %d %d\n",A,B,C,D,E);
}

int judge(int A,int B,int C,int D,int E){
	if(A==B||A==C||A==D||A==E||B==C||B==D||B==E||C==D||C==E||D==E) return 0;
	if(A==1||A==2) return 0;
	if(B==1) return 0;
	if(C==2||C==1) if(A!=5) return 0;
	if(C!=2&&C!=1&&A==5) return 0;
	if(D==1||D==2) if(C==1) return 0;
	else ;
	else if(C!=1) return 0;
	if(E==2||E==3) return 0;
	else if(E==1&&D!=1) return 0;
	if(E!=1&&D==1) return 0;
	return 1;
}