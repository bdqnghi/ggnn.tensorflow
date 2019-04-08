void main()

{
	int i=1,m=0,len[300];
	char c,str[20];
	scanf("%s",str);
	len[0]=strlen(str);
	while((c=getchar())!='\n')
	{
		scanf("%s",str);
		len[i]=strlen(str);
		i++;
	}
	m=i;
	if (m==1) printf("%d",len[0]);
	else
	{
		printf("%d,%d,",len[0],len[1]);
		for(i=2;i<m-1;i++)
		printf("%d,",len[i]);
		printf("%d",len[m-1]);
	}
}

