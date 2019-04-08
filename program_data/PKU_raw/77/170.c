void hand();                              //????                                 
char sex[2],team[100];                    
int main()
{
	int i;
	cin>>team;
	sex[0]=team[0];                        //???????????
	for(i=0;i<100;i++)
	{
		if(team[i]!=team[0] && team[i]!='\0')//?????????
			sex[1]=team[i];
		else if(team[i]=='\0')
			break;
	}
	hand();                               //????
	return 0;
}
void hand()
{
	int i,j,judge;
	if(team[0]==sex[0])                 //?????????????????
	{
		judge=0;
		for(i=0;i<100;i++)       
		{
			if(team[i]==sex[1])         //???????
			{
				for(j=1;j<100;j++)
				{
					if(team[i-j]==sex[0])//????????
					{
						judge=1;
						break;
					}
				}
				if(judge==1)
					break;
			}
		}
		cout<<i-j<<" "<<i<<endl;
		team[i]='\0';                   //?????????
		team[i-j]='\0';
		hand();
	}
}


