void main()
{
	char *str,*s1,*s2,(*s)[101];
	int i,j=0,k=0;
	str=(char *) malloc(101);
	s1=(char *) malloc(101);
	s2=(char *) malloc(101);
	s=(char (*)[101])calloc(101,101);
	gets(str);
	scanf("%s%s",s1,s2);
	for(i=0;*(str+i)!='\0';i++)
	{
		if(*(str+i)==' ')
		{
			k++;j=0;
		}
		else if(*(str+i)!=' ')
		{
			*(*(s+k)+j)=*(str+i);j++;
		}
	}
		for(i=0;i<=k;i++)
			if(strcmp(*(s+i),s1)==0)
				strcpy(*(s+i),s2);
		printf("%s",*s);
		for(i=1;i<=k;i++)
			printf(" %s",*(s+i));
}