

int main()
{
	int factory[6];
	int rank[6];
	int flag[6];
	memset(flag,0,sizeof(flag));
	for(rank[1]=1;rank[1]<=5;rank[1]++)
		for(rank[2]=1;rank[2]<=5;rank[2]++)
			for(rank[3]=1;rank[3]<=5;rank[3]++)
				for(rank[4]=1;rank[4]<=5;rank[4]++)
					for(rank[5]=1;rank[5]<=5;rank[5]++)
					{
						if(rank[1]*rank[2]*rank[3]*rank[4]*rank[5]==120)
						{
							flag[1]=(rank[1]==5);
							flag[2]=(rank[2]==2);
							flag[3]=(rank[5]==1);
							flag[4]=(rank[1]!=3);
							flag[5]=(rank[1]==4);
							if(rank[1]==rank[2]||rank[2]==rank[3]||rank[3]==rank[4]||rank[4]==rank[5]||rank[5]==rank[1]) continue;
							if(flag[rank[1]]==1&&flag[rank[2]]==1&&flag[rank[3]]==0&&flag[rank[4]]==0&&flag[rank[5]]==0&&rank[2]!=5&&rank[3]!=5)
							{
								int i;
							    for(i=1;i<=5;i++) factory[rank[i]]=i;
								for(i=1;i<=4;i++)
									cout<<factory[i]<<" ";
cout<<factory[5];
							}
						}
					}





	return 0;
}
