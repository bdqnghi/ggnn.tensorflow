int main()
{
	int A,B,C,D,E,words[6];
	for(int A=1;A<=5;A++)
	{
		for(int B=1;B<=5;B++)
		{
			if(B==A) {continue;}
			for(int C=1;C<=5;C++)
			{
				if(C==A||C==B) {continue;}
				for(int D=1;D<=5;D++)
				{
					if(D==A||D==B||D==C) {continue;}
					E=15-A-B-C-D;
					if((E!=2)&&(E!=3))
					{
						words[A]=(E==1);
						words[B]=(B==2);
						words[C]=(A==5);
						words[D]=(C!=1);
						words[E]=(D==1);
						if((words[1]==1)&&(words[2]==1)&&(words[3]==0)&&(words[4]==0)&&(words[5]==0))
						{
							cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;
						}
					}
				}
			}
		}
	}
	return 0;
}