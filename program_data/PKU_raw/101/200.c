
//**********************************************
//*      ???                                *
//*                      10.11.10 ???       *
//**********************************************

int main()
{
	int A,B,C;
	char rank[4];                                     //rank[1],rank[2],rank[3]???
	char word[4];                                     //word[1~3]?????
	for(A=1;A<=3;A++)
	{
		for(B=1;B<=3;B++)
		{
			if(A==B) continue;                // ??????a,b,c????
			C=6-A-B;
			word[A]=(B<A)+(C==A);             //a,b,c?????????????word[1~3]??????????
			rank[A]='A';                      //rank[1~3]??????
			word[B]=(A<B)+(A<C);           
			rank[B]='B';
			word[C]=(C<B)+(B<A);
			rank[C]='C';
			if(word[3]>word[2]&&word[2]>word[1])   //????????????????
				cout<<rank[3]<<rank[2]<<rank[1]<<endl;
		}
	}


	return 0;
}