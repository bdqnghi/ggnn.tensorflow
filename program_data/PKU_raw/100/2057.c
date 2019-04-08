

int main()
{
	char ch[SIZE];
	int count[52]={0};
	char zimu[52]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int i,length,sum=0;
	gets(ch);
	length=strlen(ch);
	for(i=0;i<length;i++)
	{
		if(ch[i]=='A')
		{
			count[0]++;
		}
		else if(ch[i]=='B')
		{
			count[1]++;
		}
		else if(ch[i]=='C')
		{
			count[2]++;
		}
		else if(ch[i]=='D')
		{
			count[3]++;
		}
		else if(ch[i]=='E')
		{
			count[4]++;
		}
		else if(ch[i]=='F')
		{
			count[5]++;
		}
		else if(ch[i]=='G')
		{
			count[6]++;
		}
		else if(ch[i]=='H')
		{
			count[7]++;
		}
		else if(ch[i]=='I')
		{
			count[8]++;
		}
		else if(ch[i]=='J')
		{
			count[9]++;
		}
		else if(ch[i]=='K')
		{
			count[10]++;
		}
		else if(ch[i]=='L')
		{
			count[11]++;
		}
		else if(ch[i]=='M')
		{
			count[12]++;
		}
		else if(ch[i]=='N')
		{
			count[13]++;
		}
		else if(ch[i]=='O')
		{
			count[14]++;
		}
		else if(ch[i]=='P')
		{
			count[15]++;
		}
		else if(ch[i]=='Q')
		{
			count[16]++;
		}
		else if(ch[i]=='R')
		{
			count[17]++;
		}
		else if(ch[i]=='S')
		{
			count[18]++;
		}
		else if(ch[i]=='T')
		{
			count[19]++;
		}
		else if(ch[i]=='U')
		{
			count[20]++;
		}
		else if(ch[i]=='V')
		{
			count[21]++;
		}
		else if(ch[i]=='W')
		{
			count[22]++;
		}
		else if(ch[i]=='X')
		{
			count[23]++;
		}
		else if(ch[i]=='Y')
		{
			count[24]++;
		}
		else if(ch[i]=='Z')
		{
			count[25]++;
		}
		else if(ch[i]=='a')
		{
			count[26]++;
		}
		else if(ch[i]=='b')
		{
			count[27]++;
		}
		else if(ch[i]=='c')
		{
			count[28]++;
		}
		else if(ch[i]=='d')
		{
			count[29]++;
		}
		else if(ch[i]=='e')
		{
			count[30]++;
		}
		else if(ch[i]=='f')
		{
			count[31]++;
		}
		else if(ch[i]=='g')
		{
			count[32]++;
		}
		else if(ch[i]=='h')
		{
			count[33]++;
		}
		else if(ch[i]=='i')
		{
			count[34]++;
		}
		else if(ch[i]=='j')
		{
			count[35]++;
		}
		else if(ch[i]=='k')
		{
			count[36]++;
		}
		else if(ch[i]=='l')
		{
			count[37]++;
		}
		else if(ch[i]=='m')
		{
			count[38]++;
		}
		else if(ch[i]=='n')
		{
			count[39]++;
		}
		else if(ch[i]=='o')
		{
			count[40]++;
		}
		else if(ch[i]=='p')
		{
			count[41]++;
		}
		else if(ch[i]=='q')
		{
			count[42]++;
		}
		else if(ch[i]=='r')
		{
			count[43]++;
		}
		else if(ch[i]=='s')
		{
			count[44]++;
		}
		else if(ch[i]=='t')
		{
			count[45]++;
		}
		else if(ch[i]=='u')
		{
			count[46]++;
		}
		else if(ch[i]=='v')
		{
			count[47]++;
		}
		else if(ch[i]=='w')
		{
			count[48]++;
		}
		else if(ch[i]=='x')
		{
			count[49]++;
		}
		else if(ch[i]=='y')
		{
			count[50]++;
		}
		else if(ch[i]=='z')
		{
			count[51]++;
		}
	}
	for(i=0;i<52;i++)
	{
		sum+=count[i];
	}
	if(sum==0)
	{
		printf("No");
	}
	else
	{
		for(i=0;i<52;i++)
		{
			if(count[i]>0)
			{
				printf("%c=%d\n",zimu[i],count[i]);
			}
		}
	}
	return 0;
}