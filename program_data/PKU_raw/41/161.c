int main()
{
	int i,j,n[5],guess[5],sum,mark;
	for(n[0]=1;n[0]<6;n[0]++)
		for(n[1]=1;n[1]<6;n[1]++)
			for(n[2]=1;n[2]<6;n[2]++)
				for(n[3]=1;n[3]<6;n[3]++)
					for(n[4]=1;n[4]<6;n[4]++)
					{
						if(n[4]!=2&&n[4]!=3&&n[0]+n[1]+n[2]+n[3]+n[4]==15&&n[0]*n[1]*n[2]*n[3]*n[4]==120)
						{
							guess[0]=(n[4]==1);
							guess[1]=(n[1]==2);
							guess[2]=(n[0]==5);
							guess[3]=(n[2]!=1);
							guess[4]=(n[3]==1);
							mark=0;
							sum=0;
							
							for(i=0;i<5;i++)
							{
								if(guess[i]==1)
									sum++;
								if(guess[i]==1&&(n[i]==1||n[i]==2))
									mark++;
							}
							if(mark==2&&sum==2)
							{
								for(i=0;i<4;i++)
									cout<<n[i]<<" ";
								cout<<n[4]<<endl;
							}
							
						}	
					}

	return 0;
}