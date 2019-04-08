void main()
{
	char str[14],substr[4],c;
	int i,Max;
	while(scanf("%s%s",str,substr)!=EOF)
	{
		c=str[0];
		for(i=0;str[i]!='\0';i++)
			if(str[i]>c)
			{c=str[i];Max=i;}
		for(i=0;str[i]!='\0';i++)
		{
		    printf("%c",str[i]);
		    if(i==Max)
			    printf("%s",substr);
		}
		printf("\n");
	}

}