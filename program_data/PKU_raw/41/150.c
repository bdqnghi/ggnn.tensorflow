
int main()
{
	int r[5],i,j;
	int t[5];
	int flag=0;

	for (r[0]=5;r[0]>0;r[0]--)
		for (r[1]=5;r[1]>0;r[1]--)
			for (r[2]=5;r[2]>0;r[2]--)
				for (r[3]=5;r[3]>0;r[3]--)
					for (r[4]=5;r[4]>0;r[4]--)
					{
						if (r[4]!=2 && r[4]!=3 && (r[0]-r[1]) * (r[0]-r[2]) * (r[0]-r[3]) * (r[0]-r[4]) * (r[1]-r[2]) * (r[1]-r[3]) * (r[1]-r[4]) * (r[2]-r[3]) *(r[2]-r[4]) *(r[3]-r[4]) !=0 )
						{
								t[0]=(r[4]==1);
								t[1]=(r[1]==2);
								t[2]=(r[0]==5);
								t[3]=(r[2]!=1);
								t[4]=(r[3]==1);
								if (t[0]+t[1]+t[2]+t[3]+t[4]==2 )
								{
									for (i=0;i<5;i++)
										if (t[i]==1 && (r[i]-1) *(r[i]-2)==0 )
											flag++; 
									if (flag==2)
									{	
										for (j=0;j<4;j++)
											cout<<r[j]<<' ';
										cout<<r[4];
									}
									else continue;
								}
								else continue;
						}
						else continue;
					}
	return 0;
}