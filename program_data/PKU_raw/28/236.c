main()
{
	char s[4000];//?400???4000
	gets(s);
	int i,j;
	for(i=0;;i++)
	{
		if(s[i]!=' ')
		{
			for(j=1;;j++)
			{
				if(s[i+j]==' '||s[i+j]=='\0')
				{
					if(i==0)
						printf("%d",j);
					else
						printf(",%d",j);
				    break;
				}
			}
			i=i+j;
		}
		if(s[i]=='\0')
			break;
	}
	printf("\n");
}