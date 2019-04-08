void main()
{
	int n,i,k,num,max=0,len,count[1000]={0};
	char s[1000],zi[500][6],now[6];
	scanf("%d",&n);
	scanf("%s",s);
	len=strlen(s);
	

	for(i=0;i<n;i++)
		zi[0][i]=s[i];
	zi[0][i]='\0';
	count[0]=1;

	num=1;
	
	
	for(i=1;i<len-n+1;i++)
	{
		for(k=0;k<n;k++)
			now[k]=s[i+k];
		now[k]='\0';
		int p=0;
		while((p<num)&&(strcmp(now,zi[p])!=0))
		p++;
		if(p<num) count[p]++;
		else {
			count[num]=1;
			strcpy(zi[num],now);
			num++;
		}
	}
	for(i=0;i<num;i++)
	{
		if(count[i]>max)
			max=count[i];
	
	}
	if(max>1)
	{

	printf("%d\n",max);

	for(i=0;i<num;i++)
	{
		if(count[i]==max)
		{
			puts(zi[i]);
		
		}
	}
	}
	else printf("NO");
}
	
