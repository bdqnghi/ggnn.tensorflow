int main()
{
	int words[6],rank[6];
	int A,B,C,D,E;
	for(A=1;A<=5;A++)
	{
	
		for(B=1;B<=5;B++)
		{
			if(A==B)
				continue;
			for(C=1;C<=5;C++)
			{
				if(A==C||B==C)
					continue;
				for(D=1;D<=5;D++)
				{
					if(A==D||B==D||C==D)
						continue;
					for(E=1;E<=5;E++)
					{
						if(A==E||B==E||C==E||D==E)
							continue;
						words[A]=(E==1);
						words[B]=(B==2);
						words[C]=(A==5);
						words[D]=(C!=1);
						words[E]=(D==1);
						rank[A]=A;
						rank[B]=B;
						rank[C]=C;
						rank[D]=D;
						rank[E]=E;
						if(words[rank[1]]==1&&words[rank[2]]==1&&words[rank[3]]==0&&words[rank[4]]==0&&words[rank[5]]==0&&E!=2&&E!=3)
							cout<<rank[A]<<" "<<rank[B]<<" "<<rank[C]<<" "<<rank[D]<<" "<<rank[E];
					}
				}
			}
		}
	}
		
	cout<<endl;
	
	return 0;
}