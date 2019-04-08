int main()
{
	int wei[5],i,j,temp;
	char name[5]={' ','z','q','s','l'};
	for(wei[1]=10;wei[1]<=50;wei[1]+=10)
	{
		for(wei[2]=10;wei[2]<=50;wei[2]+=10)
		{
			if(wei[2]!=wei[1])
			{
				for(wei[3]=10;wei[3]<=50;wei[3]+=10)
				{
					if(wei[3]!=wei[1]&&wei[3]!=wei[2])
					{
						for(wei[4]=10;wei[4]<=50;wei[4]+=10)
						{
							if(wei[4]!=wei[1]&&wei[4]!=wei[2]&&wei[4]!=wei[3])
							{
								if(wei[1]+wei[2]==wei[3]+wei[4]&&wei[1]+wei[4]>wei[2]+wei[3]&&wei[1]+wei[3]<wei[2])
								{
									for(j=50;j>=10;j-=10)
									{
										for(temp=1;temp<=4;temp++)
										{
											if(wei[temp]==j)
												cout<<name[temp]<<" "<<wei[temp]<<endl;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}