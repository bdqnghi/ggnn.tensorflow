/*????  ??*/
int main()
{
	int A,B,C,i;                          //??A,B,C????????A,B,C
	char rank[3];                         //??????rank[3]
	for(A=0;A<=2;A++){                    //???A,B,C
		for(B=0;B<=2;B++){
			if(B==A) continue;
			C=3-A-B;
			if((A==(B<A)+(C==A))&&
				(B==(A<B)+(A<C))&&
				(C==(C<B)+(B<A))){
				rank[A]='A';
			         rank[B]='B';
				rank[C]='C';
				for(i=2;i>=0;i--)                  
					cout<<rank[i];}}}    //????A,B,C
	return 0;
}

