
int main()
{
	int A,B,C,D,E,a,b,c,d,e;
	int m[6];
	for(A=1;A<=5;A++){
	for(B=1;B<=5;B++){
	if(A==B) continue;
	for(C=1;C<=5;C++){
	if(B==C||A==C) continue;
	for(D=1;D<=5;D++){
	if(A==D||B==D||C==D) continue;
	for(E=1;E<=5;E++){
    if(A==E||B==E||C==E||D==E) continue;
    a=(E==1);b=(B==2);c=(A==5);d=(C!=1);e=(D==1);
	if(E==2||E==3) break;
	m[A]=a;m[B]=b;m[C]=c;m[D]=d;m[E]=e;
	if((m[1]+m[2]==2)&&(m[3]+m[4]+m[5]==0))
		cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;
}
}
}
}
}
	return 0;
}