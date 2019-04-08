int main()
{
	int tz[4],i,j,p;
	char x[4]={'z','q','s','l'},xs;
	for(tz[0]=1;tz[0]<=5;tz[0]++)
		for(tz[1]=1;tz[1]<=5;tz[1]++)
		{
			if(tz[1]==tz[0]) continue;
			else
			{
				for(tz[2]=1;tz[2]<=5;tz[2]++)
				{
						if(tz[2]==tz[0] || tz[2]==tz[1]) continue;
						else
						{
							tz[3]=tz[1]+tz[0]-tz[2];
							if(tz[0]+tz[3]>tz[1]+tz[2] && tz[0]+tz[2]<tz[1])
							{
								for(i=0;i<3;i++)
								{
									for(j=0;j<3-i;j++)
									{
										if(tz[j]<tz[j+1])
										{
											p=tz[j];
											tz[j]=tz[j+1];
											tz[j+1]=p;
											xs=x[j];
											x[j]=x[j+1];
											x[j+1]=xs;
										}
									}
								}
								for(j=0;j<4;j++)
								{
									cout<<x[j]<<' '<<tz[j]*10<<endl;
								}
							}
						}
				}
			}
		}
	return 0;
}