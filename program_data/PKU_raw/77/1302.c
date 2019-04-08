int main()
{
	char team[100]={'\0'};
	char b,g;
	int i,j,num=0,emnum=0,n;									
	cin.getline(team,100);
	b=team[0];
	for (i=0;i<100;i++)
		if (team[i]!=b)
		{
			g=team[i];
			break;
		}														
		for (i=0;i<100;i++)
			if (team[i]!='\0')
				num++;												
		for (n=1;n<=num/2;n++)
		{
			for (i=0;i<num;i++)
			{
				if (team[i]=='\0')
					continue;										
				else if ((team[i]!='\0')&&(team[i+1]!='\0'))
				{
					if ((team[i]==b)&&(team[i+1]==g))			
					{
						cout<<i<<" "<<i+1<<endl;
						team[i]='\0';
						team[i+1]='\0';
						break;
					}
					else
						continue;
				}
				else if ((team[i]!='\0')&&(team[i+1]=='\0'))
				{
					emnum=0;
					j=i+1;
					while (team[j]=='\0')
					{
						emnum++;
						j++;
					}
					if ((team[i]==b)&&(team[i+emnum+1]==g))	
					{
						cout<<i<<" "<<i+emnum+1<<endl;
						team[i]='\0';
						team[i+emnum+1]='\0';
						break;
					}
					else 
						continue;
				}
			}	
		}
		return 0;
}
