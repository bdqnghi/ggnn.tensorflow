int main()
{
	int A,B,C;                                  //???????
	int word[4];                                //??????
	char rank[4];                               //???????
	int i;                                      //??????
	for(A=1;A<=3;A++)                           //A??
	{
		for(B=1;B<=3;B++)                       //B??
		{
			if(A==B)continue;                   //??A=B
			C=6-A-B;                            //??C
		         word[A]=(B<A)+(C==A);               //A????
			word[B]=(A<B)+(A<C);                //B????
			word[C]=(C<B)+(B<A);                //C????
			if(word[1]<word[2]&&word[2]<word[3])//??????????
			{
				rank[A]='A';
				rank[B]='B';
				rank[C]='C';
		        for(i=3;i>=1;i--)               //????
			    cout<<rank[i];
			}
		}
	}
	return 0;
}