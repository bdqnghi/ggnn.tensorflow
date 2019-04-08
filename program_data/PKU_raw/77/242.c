void change(char str[],char w,char m)
{
	int ctr=0,ctr1=0;
	for (ctr=0;str[ctr+1]!='\0';ctr++)
	{   if(str[ctr]==w)continue;
		for(ctr1=ctr+1;ctr1<strlen(str);ctr1++)
		{if(str[ctr1]!=' ')break;}
		if(str[ctr1]==w)
		{
			printf("%d %d\n",ctr,ctr1);str[ctr]=str[ctr1]=' ';
			break;}
	}
		
}
main()
{
	char a[1000]={'\0'},w,m;int i=0;
	gets(a);m=a[0];
	for(i=0;i<strlen(a);i++)if(a[i]!=a[0])break;w=a[i];
	for(i=0;i<strlen(a)/2;i++)
	{change(a,w,m);}
	return 0;
}
