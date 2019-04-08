void main()
{
	char *index,*i;
	int max;
	char str1[100],str2[5];
	while(scanf("%s%s",&str1,&str2)!=EOF)
	{
		max=0;
		for(i=str1;*i!='\0';i++)
			if(*i>max) max=*i,index=i;
		for(i=str1;i<=index;i++)
			printf("%c",*i);
		printf("%s",str2);
		for(i=index+1;*i!='\0';i++)
			printf("%c",*i);
		printf("\n");
	}

}