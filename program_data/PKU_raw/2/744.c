int main(int argc, char* argv[])
{
	int m,i,j=0,zhe[26],t=0,x,name;
	for(i=0;i<26;i++)
	{
		zhe[i]=0;
	}
	char s[26];
	scanf("%d",&m);
	struct
	{
		int num;
		char s[26];
	}shu[1000];
	for(i=0;i<m;i++)
	{
		scanf("%d%s",&shu[i].num,shu[i].s);
	}
for(i=0;i<m;i++)
{
    for(j=0;shu[i].s[j]!=0;j++)
	{
    	switch(shu[i].s[j])
		{
        	case 'A':zhe[0]++;break;
            case 'B':zhe[1]++;break;
        	case 'C':zhe[2]++;break;
	        case 'D':zhe[3]++;break;
	case 'E':zhe[4]++;break;
	case 'F':zhe[5]++;break;
	case 'G':zhe[6]++;break;
	case 'H':zhe[7]++;break;
	case 'I':zhe[8]++;break;
	case 'J':zhe[9]++;break;
	case 'K':zhe[10]++;break;
	case 'L':zhe[11]++;break;
	case 'M':zhe[12]++;break;
	case 'N':zhe[13]++;break;
	case 'O':zhe[14]++;break;
	case 'P':zhe[15]++;break;
	case 'Q':zhe[16]++;break;
	case 'R':zhe[17]++;break;
	case 'S':zhe[18]++;break;
	case 'T':zhe[19]++;break;
	case 'U':zhe[20]++;break;
	case 'V':zhe[21]++;break;
	case 'W':zhe[22]++;break;
	case 'X':zhe[23]++;break;
	case 'Y':zhe[24]++;break;
	case 'Z':zhe[25]++;break;
		}
	}
	}
	    for(j=0;j<26;j++)
		{
			if(zhe[j]>t)
			{
				t=zhe[j];
			    x=j;
			}
		}
			name='A'+x;
			printf("%c\n",name);
		printf("%d\n",t);
		for(i=0;i<m;i++)
		{
			for(j=0;j<26;j++)
			{
			if(shu[i].s[j]==name)
				printf("%d\n",shu[i].num);
			}
		}


	return 0;
}