int main()
{
	int ren[5],i;
    char name[5]={'0','z','q','s','l'};
    for(ren[1]=1;ren[1]<=5;ren[1]++)
		for(ren[2]=1;ren[2]<=5;ren[2]++)
			for(ren[3]=1;ren[3]<=5;ren[3]++)
			{
				ren[4]=ren[1]+ren[2]-ren[3];
				if(ren[4]>0&&ren[4]<=5&&(ren[1]+ren[4])>(ren[2]+ren[3])&&(ren[1]+ren[3])<ren[2])
				{
					for(i=5;i>=1;i--)
						for(ren[0]=1;ren[0]<=4;ren[0]++)
							if (ren[ren[0]]==i) 
							{
								cout<<name[ren[0]]<<' '<<i<<'0'<<endl;
								break;
							}
					break;
				}
			}
	return 0;
}