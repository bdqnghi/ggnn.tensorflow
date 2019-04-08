int main()
{
	char str[600];
	int n,i,j,lenth,len[600]={0};
	scanf("%d\n",&n);
	gets(str);
	char word[600][7]={{'\0'}};
	lenth=strlen(str);
	for(i=0;i<=lenth;i++)
	{
		if((str[i+n-1]=='\0')||(str[i+n-1]==',')||(str[i+n-1]=='.'))
		{
			break;
		}else{
			for(j=0;j<n;j++)
			{
				word[i][j]=str[i+j];
			}
		}
	}
	int log,num,sum;
	log=i-1;
	char zifu[600][10]={{'\0'}};
	strcpy(zifu[0],word[0]);
	num=0;
	len[0]=1;
	for(i=1;i<=log;i++)
	{
		for(j=0,sum=0;j<=num;j++)
		{
			if(strcmp(zifu[j],word[i])==0)
			{
				len[j]++;
				sum=1;
			}
		}
		if(sum!=1)
		{
			num++;
			len[num]=1;
			strcpy(zifu[num],word[i]);
		}
	}
	int max;
	max=len[0];
	for(i=1;i<=num;i++)
	{
		if(max<len[i])
		{
			max=len[i];
		}
	}
	if(max<=1)
	{
		printf("NO");
	}else{
	printf("%d\n",max);
	for(i=0;i<=log;i++)
	{
		if(len[i]==max)
		{
			printf("%s\n",zifu[i]);
		}
	}
	}
	return 0;
}
		

