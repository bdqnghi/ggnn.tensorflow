int main()
{
	int A,B,C,D,E,a[6];
	for(A=1;A<=5;A++)
		for(B=1;B<=5;B++)
		{
			if(A==B) continue;           //???????
			for(C=1;C<=5;C++)
			{
				if(A==C||B==C) continue;
				for(D=1;D<=5;D++)
				{
					if(A==D||B==D||C==D) continue;
					for(E=1;E<=5;E++)
					{
						if(A==E||B==E||C==E||D==E) continue;
						if(E==2||E==3) continue;
						a[A]=(E==1);
						a[B]=(B==2);
						a[C]=(A==5);
						a[D]=(C!=1);
						a[E]=(D==1);
						if(a[1]==1&&a[2]==1&&a[3]==0&&a[4]==0&&a[5]==0)         //??????????????????????
							cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;
					}
				}
			}
		}
	return 0;
}