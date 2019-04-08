int main()
{
	int A,B,C,word[4],i;                                               //?????ABC?????????word?????????
	char rank[4];
	for(A=1;A<=3;A++)
		for(B=1;B<=3;B++)
		{if(B==A)continue;
	        for(C=1;C<=3;C++)
			{if(C==A||C==B)continue;                      //?????????????????????
			word[1]=(B>A)+(C==A);
			word[2]=(A>B)+(A>C);
			word[3]=(C>B)+(B>A);                         //????????
			rank[A]='A';
			rank[B]='B';                             
			rank[C]='C';
			if(word[rank[1]-64]>word[rank[2]-64]&&word[rank[2]-64]>word[rank[3]-64])      //?????????????
				for(i=1;i<4;i++)
					cout<<rank[i];                                           //?????
			}}
	return 0;
}