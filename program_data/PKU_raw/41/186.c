int main()
{
	int a[5],i,j,k;
	for(a[0]=1;a[0]<6;a[0]++)
		for(a[1]=1;a[1]<6;a[1]++)
		{
			if(a[1]==a[0])
				continue;
			else
			{
				for(a[2]=1;a[2]<6;a[2]++)
				{
					if(a[2]==a[0]||a[2]==a[1])
						continue;
					else
					{
						for(a[3]=1;a[3]<6;a[3]++)
						{
							if(a[3]==a[0]||a[3]==a[1]||a[3]==a[2])
								continue;
							else
							{
								a[4]=15-a[0]-a[1]-a[2]-a[3];
								
								int w[5];
								w[0]=(a[4]==1);
								w[1]=(a[1]==2);
								w[2]=(a[0]==5);
								w[3]=(a[2]!=1);
								w[4]=(a[3]==1);
								for(k=0;k<4;k++)
									for(j=k+1;j<5;j++)
									{
										if(a[4]!=2&&a[4]!=3&&(w[j]+w[k]==2)&&((a[j]==1&&a[k]==2)||(a[j]==2&&a[k]==1))&&w[0]+w[1]+w[2]+w[3]+w[4]==2)
										{
											for(i=0;i<4;i++)
												cout<<a[i]<<" ";
										    cout<<a[4]<<endl;
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