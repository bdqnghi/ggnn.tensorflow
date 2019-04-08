int prime(int);
int main()
{
	int b[6],a[6];
	int A,B,C,D,E,u;
	for(A=1;A<=5;A++)
		for(B=1;B<=5;B++)
		{
			if(A==B)continue;
			for(C=1;C<=5;C++)
			{
				if(A==C||B==C)continue;
				for(D=1;D<=5;D++)
				{
					if(A==D||B==D||C==D)continue;
					E=15-A-B-C-D;
					b[A]=(E==1);
					b[B]=(B==2);
					b[C]=(A==5);
					b[D]=(C!=1);
					b[E]=(D==1);
					if(E==2||E==3)continue;
					else if(b[1]==1&&b[2]==1&&b[3]==0&&b[4]==0&&b[5]==0)
					{
						a[1]=A;
						a[2]=B;
						a[3]=C;
						a[4]=D;
						a[5]=E;
					}
				}
			}
		}
		for(u=1;u<=4;u++)
			cout<<a[u]<<" ";
		cout<<a[u];
		
		return 0;
}
