int main()
{
	int g[6],i,j,k,num[6];
	for(g[1]=1;g[1]<6;g[1]++)
		for(g[2]=1;g[2]<6;g[2]++)
			if(g[1]!=g[2])
				for(g[3]=1;g[3]<6;g[3]++)
					if(g[3]!=g[1]&&g[3]!=g[2])
						for(g[4]=1;g[4]<6;g[4]++)
							if(g[4]!=g[1]&&g[4]!=g[2]&&g[4]!=g[3]){
								g[5]=15-g[1]-g[2]-g[3]-g[4];
								if(g[5]!=2&&g[5]!=3){
									num[1]=(g[5]==1);
									num[2]=(g[2]==2);
									num[3]=(g[1]==5);
									num[4]=(g[3]!=1);
									num[5]=(g[4]==1);
									j=0;
									for(k=1;k<6;k++)
									{
										if(g[k]==1||g[k]==2)
										{if(num[k]==1)
										j++;}
										else
										{if(num[k]==0)
										j++;}}
                                     if(j==5)
									 {for(i=1;i<5;i++)
											 cout<<g[i]<<' ';
									 cout<<g[5];
									 return 0;}}}
	return 0;
}