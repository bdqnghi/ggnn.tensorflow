void main()
{ 
    int cases,sum[26],i,max,j;
	char str[1001];
	scanf("%d",&cases);
	while(cases>0)
	{
		scanf("%s",str);for(i=0;i<26;i++) sum[i]=0;
		for(i=0;i<strlen(str);i++)
			sum[str[i]-'a']++;
		max=0;
		for(j=0;j<strlen(str)+1;j++)
		{if(sum[str[j]-'a']==1)
			{printf("%c\n",str[j]);
		break;}


			if(j==strlen(str))
				printf("no");}cases--;
}}