void main()
{
	void insert(char str[],char temp[4]);
	char str[10][15]={'\0'},temp[4];
	int i,j;
	char c;

	for(i=0;;i++)
	{
		if((c=getchar())==EOF)break;
		else
		{
			str[i][0]=c;
			for(j=1;;j++)
			{
				if((c=getchar())==' ')break;
				str[i][j]=c;
			}
		}
		gets(temp);
		insert(str[i],temp);
		printf("%s\n",str[i]);
	}
}

void insert(char str[],char temp[4])
{
	int i,j = 0,temp2=strlen(str);
	for(i=1;i<temp2;i++)
	{
		if(str[i]>str[j])
			j=i;
	}
	for(i=(strlen(str))-1;i>j;i--)
		str[i+3]=str[i];
	for(i=0;i<3;i++)
		str[j+i+1]=temp[i];
}