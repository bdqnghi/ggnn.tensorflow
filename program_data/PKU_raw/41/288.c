int main()
{
	int n[5]={0};
	int ans[5]={0},i,j;
	for(n[0]=1;n[0]<=5;n[0]++)
		for(n[1]=1;n[1]<=5;n[1]++)
			for(n[2]=1;n[2]<=5;n[2]++)
				for(n[3]=1;n[3]<=5;n[3]++)
					for(n[4]=1;n[4]<=5;n[4]++)
					{
						int flag=0,cc,count=0;
						for(i=0;i<4;i++)
							for(j=i+1;j<5;j++)
								if(n[i]==n[j])
								{
									flag=1;
									break;
								}
								//cc1=(A!=B)&&(A!=C)&&(A!=D)&&(A!=E)&&(B!=C)&&(B!=D)&&(B!=E)&&(C!=D)&&(C!=E)&&(D!=E);
						cc=(n[4]!=2)&&(n[4]!=3);
						ans[0]= (n[4]==1);
						ans[1]= (n[1]==2);
						ans[2]= (n[0]==5);
						ans[3]= (n[2]!=1);
						ans[4]= (n[3]==1);
						if(flag==0&&cc==1)
						{
							for(i=0;i<5;i++)
							{
								if((n[i]==1||n[i]==2)&&ans[i]==1)
									count++;
								if((n[i]!=1&&n[i]!=2)&&ans[i]==0)
									count++;
							}
							if(count==5)
							{
								for(i=0;i<4;i++)
									cout<<n[i]<<' ';
								cout<<n[4]<<endl;
							}
						}
					}
	return 0;
}