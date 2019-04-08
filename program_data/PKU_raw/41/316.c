int main()
{
	int chang[5][2]={0},i,j,k,sum[2]={0};
	for (chang[0][0]=1;chang[0][0]<=5;chang[0][0]++)
	{
		if (chang[0][0]==5)
			chang[2][1]=1;
		else 
			chang[2][1]=0;
		for (chang[1][0]=1;chang[1][0]<=5;chang[1][0]++)
		{
			if (chang[1][0]==2)
				chang[1][1]=1;
			else 
				chang[1][1]=0;
			for (chang[2][0]=1;chang[2][0]<=5;chang[2][0]++)
			{
				if (chang[2][0]!=1)
					chang[3][1]=1;
				else
					chang[3][1]=0;
				for (chang[3][0]=1;chang[3][0]<=5;chang[3][0]++)
				{
					if (chang[3][0]==1)
						chang[4][1]=1;
					else
						chang[4][1]=0;
					for (chang[4][0]=1;chang[4][0]<=5;chang[4][0]++)
					{
						if (chang[4][0]==2 || chang[4][0]==3)
							continue;
						if (chang[4][0]==1)
							chang[0][1]=1;
						else
							chang[0][1]=0;
						sum[0]=0;sum[1]=0;
						for (i=0;i<5;i++)
						{
							sum[1]+=chang[i][1];
							sum[0]+=chang[i][0];
						}
						for (i=0;i<5;i++) 
						{
							for (j=0;j<5;j++)
							{
								if (chang[i][0]==1 && chang[j][0]==2 
									&& chang[i][1]*chang[j][1]==1 && sum[1]==2 && sum[0]==15 
									&&chang[1][0]!=chang[4][0]&&chang[1][0]!=chang[3][0])
								{
									for (k=0;k<4;k++)
									{cout <<chang[k][0]<<" ";}
									cout <<chang[4][0]<<endl;
								}
							}
						}
					}
				}
			}
		}
	}return 0;
}