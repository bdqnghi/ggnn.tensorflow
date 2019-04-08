int main()
{
	int i,j;
	int rank[6];
	for(rank[1]=1;rank[1]<=5;rank[1]++)
		for(rank[2]=1;rank[2]<=4;rank[2]++)
		{
			if(rank[2]==rank[1]) continue;
			for(rank[3]=1;rank[3]<=4;rank[3]++)
			{
				if(rank[3]==rank[2]||rank[3]==rank[1]) continue;
				for(rank[4]=1;rank[4]<=5;rank[4]++)
				{
					if(rank[4]==rank[1]||rank[4]==rank[2]||rank[4]==rank[3])  continue;
					for(rank[5]=1;rank[5]<=5;rank[5]++)
					{
						if(rank[5]==rank[1]||rank[5]==rank[2]||rank[5]==rank[3]||rank[5]==rank[4]) continue;
						int decide[5]={(rank[1]==5),(rank[2]==2),(rank[5]==1),(rank[1]!=3),(rank[1]==4)};
						int count=0;
						if(decide[0]+decide[1]+decide[2]+decide[3]+decide[4]==2)
						{
							for(j=0;j<=4;j++)
								if(decide[j]==1&&(rank[1]==j+1||rank[2]==j+1)) count++; 
							if(count==2)
							{
								for(i=1;i<=5;i++)
									for(j=1;j<=5;j++)
									{
										if(i==rank[j]) 
										{
											if(i==1)  cout<<j;
											else
											{cout<<" "<<j;break;}
										}

									}
									return 0;

							}
						}
					}
				}
			}
		}
}