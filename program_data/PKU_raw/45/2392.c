int cap(char s[],char w[],int i)
{
	int j;
	for(j=0;j<=strlen(s);j++)
	{
//		printf("%c %c\n",s[j],w[j+i]);
		if(s[j]!=w[j+i])
			break;
	}
	if(j==strlen(s)||j==strlen(s)+1)
	{
		return 1;
	}
	else
		return 0;
}
void main()
{
	char s[51],w[51];
	scanf("%s%s",s,w);
	int i,l=strlen(w),ls=strlen(s);
	for(i=0;i<=l-ls;i++)
	{
//		printf("%d\n",cap(s,w,i));
		if(cap(s,w,i)==1)
		{
			printf("%d",i);
			break;
		}
	}
//	printf("%d\n",i);
	if(i>l-ls)
		printf("error");
}