
int main() {
	int A,B,C,a;
	for(A=0;A<=2;A=A+1){
		for(B=0;B<=2;B=B+1){
			for(C=0;C<=2;C=C+1){
				if((B<A)+(C!=A)==A&&(A<B)+(A<C)==B&&(C<B)+(B<A)==C&&A!=B&&A!=C&&B!=C)break;}
			if((B<A)+(C!=A)==A&&(A<B)+(A<C)==B&&(C<B)+(B<A)==C&&A!=B&&A!=C&&B!=C)break;}
		if((B<A)+(C!=A)==A&&(A<B)+(A<C)==B&&(C<B)+(B<A)==C&&A!=B&&A!=C&&B!=C)break;}			//????????3????????????
	for(a=0;a<=2;a=a+1){
		if(A==a)cout<<"A";
		if(B==a)cout<<"B";
		if(C==a)cout<<"C";}																			//??????
	return 0;
}
