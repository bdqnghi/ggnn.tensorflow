void ngram(char str[],int n)
{
	char ng[2000][5]={'\0'};
	int i;
	int Len=strlen(str);
	for(i=0;i<Len-n+1;i++)
	{
		strncpy(ng[i],str+i,n);
	}
	int j;int max=1,count;
	for(i=0;i<Len-n+1;i++)
	{
		count=1;
		for(j=i+1;j<Len-n+1;j++)
		{
			if(strcmp(ng[i],ng[j])==0)
				count++;
		}
		if(count>=max)
			max=count;
	}
	if(max==1)
		printf("NO");
	else
	{
		printf("%d\n",max);
		for(i=0;i<Len-n+1;i++)
		{
			count=1;
			for(j=i+1;j<Len-n+1;j++)
			{
				if(strcmp(ng[i],ng[j])==0)
					count++;
			}
			if(count==max)
				printf("%s\n",ng[i]);
		}
	}
}
void main()
{
	int n;
	char str[500];
	scanf("%d%s",&n,str);
	ngram(str,n);
}