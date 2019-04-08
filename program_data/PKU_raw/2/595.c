int main()
{
	int m,i,j,k,max=-1;
	int c[26];
	char prname;
	struct list
	{
		int num;
		char writer[27];
		int len;
	}book[999];
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&book[i].num);
		gets(book[i].writer);
		book[i].len=strlen(book[i].writer);
	}
	for(i=0;i<26;i++)
		c[i]=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<book[i].len;j++)
		{
			switch(book[i].writer[j])
			{
			case 'A':c[0]++;break;
			case 'B':c[1]++;break;
			case 'C':c[2]++;break;
			case 'D':c[3]++;break;
			case 'E':c[4]++;break;
			case 'F':c[5]++;break;
			case 'G':c[6]++;break;
			case 'H':c[7]++;break;
			case 'I':c[8]++;break;
			case 'J':c[9]++;break;
			case 'K':c[10]++;break;
			case 'L':c[11]++;break;
			case 'M':c[12]++;break;
			case 'N':c[13]++;break;
			case 'O':c[14]++;break;
			case 'P':c[15]++;break;
			case 'Q':c[16]++;break;
			case 'R':c[17]++;break;
			case 'S':c[18]++;break;
			case 'T':c[19]++;break;
			case 'U':c[20]++;break;
			case 'V':c[21]++;break;
			case 'W':c[22]++;break;
			case 'X':c[23]++;break;
			case 'Y':c[24]++;break;
			case 'Z':c[25]++;break;
			}
		}
	}
	for(i=0;i<26;i++)
	{
		if(c[i]>max)
			max=c[i];
		else
			continue;
	}
	for(i=0;i<26;i++)
	{
		if(c[i]!=max)
			continue;
		else
		{
			prname=i+65;
			printf("%c\n",prname);
			printf("%d\n",max);
			for(j=0;j<m;j++)
			{
				for(k=0;k<book[j].len;k++)
				{
					if(book[j].writer[k]!=prname)
						continue;
					else
					{
						printf("%d\n",book[j].num);
						break;
					}
				}
			}
			break;
		}
	}
	return 0;
}