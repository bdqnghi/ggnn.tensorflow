int main()
{
	int A,B,C,D,E,word[6];
	int rank[6];
	for(A=1;A<6;A++)
	{
		for(B=1;B<6;B++)
		{
			if(A==B) continue;
            for(C=1;C<6;C++)
			{
				if(A==C||B==C) continue;
				for(D=1;D<6;D++)
				{
					if(A==D||B==D||C==D) continue;
					for(E=1;E<6;E++)
					{
						if(A==E||B==E||C==E||D==E||E==2||E==3) 
							continue;
						else
						{
							word[A]=(E==1);
						word[B]=(B==2);
						word[C]=(A==5);
						word[D]=(C!=1);
						word[E]=(D==1);
						if(((word[1]+word[2])==2)&&((word[3]+word[4]+word[5])==0))
						{
							rank[0]=A;
							rank[1]=B;
							rank[2]=C;
							rank[3]=D;
							rank[4]=E;
						    break;
						}
						}
					}
				}
			}
		}
	}
	for(int i=0;i<4;i++)
		cout<<rank[i]<<" ";
              cout<<rank[4];
	return 0;
}
