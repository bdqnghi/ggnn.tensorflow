int main()
{
	int A,B,C,word[4];
	char rank[4];
	for(A=1;A<=3;A++) //??????????????1?2?3
	{
		for(B=1;B<=3;B++)
		{
			if (B==A) continue;//?????
			else
			{
				for(C=1;C<=3;C++)
				{
					if((C==B)||(C==A)) continue;
					else
					{
						word[A]=(B>A)+(C==A);
						word[B]=(A>B)+(A>C);
						word[C]=(C>B)+(B>A);//?????????
						rank[A]='A';
						rank[B]='B';
						rank[C]='C';
						if ((word[1]>word[2])&&(word[2]>word[3]))//????????
							cout<<rank[1]<<rank[2]<<rank[3]<<endl;
					}
				}
			}
		}
	}
	return 0;
}


					     
