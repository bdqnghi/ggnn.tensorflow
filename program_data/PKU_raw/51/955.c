void main()
{
	int n;
	scanf("%d",&n);
	int length;
	char str[500];
	scanf("%s",str);
	char son[500][5];
	length=strlen(str);
	int i,j;
	for(i=0;i<length-n+1;i++)
	{
		for(j=0;j<n;j++)
		{
			son[i][j]=str[i+j];
		}
		son[i][n]='\0';
	}
	int numson=length-n+1;
	int number[500]={0};
	for(i=0;i<numson;i++)
	{
		if(!strcmp(son[0],son[i]))
			number[0]++;
	}
	for(i=1;i<numson;i++)
	{
		for(j=0;j<i;j++)
		{
			if(!strcmp(son[i],son[j]))
				continue;
		}
		for(j=i;j<numson;j++)
		{
			if(!strcmp(son[i],son[j]))
				number[i]++;
		}
	}
	int max=0;
	for(i=0;i<numson;i++)
	{
		if(number[i]>max)
			max=number[i];
	}
	if(max==1)
		printf("NO\n");
	else
	{
		printf("%d\n",max);
		for(i=0;i<numson;i++)
		{
			if(number[i]==max)
				printf("%s\n",son[i]);
		}
	}
}
