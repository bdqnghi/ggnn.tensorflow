int main()
{
	int A,B,C,D,E;
	int words[6];
	for(A = 1; A<= 5; A++) 
	{
		for(B = 1; B<= 5; B++) 
		{
			if(A == B) continue;
			for(C = 1; C<= 5; C++) 
			{
				if(A == C || B == C) continue;
				for(D = 1; D<= 5; D++) 
				{
					if(A == D || B == D || C == D) continue;
					E = 15 - A - B - C - D;
					if(E==2||E==3) continue;
					words[A]=(E==1);
					words[B]=(B==2);
					words[C]=(A==5);
					words[D]=(C!=1);
					words[E]=(D==1);
					if(words[1]==1&&words[2]==1&&words[3]+words[4]+words[5]==0)
						cout<<A<<' '<<B<<' '<<C<<' '<<D<<' '<<E;
				}
			}
		}
	}
	return 0;
}