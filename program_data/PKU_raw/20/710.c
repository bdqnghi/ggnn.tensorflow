






void main()
{
	char str[11],substr[4],max,final[14]={'\0'};
	int i,k,j;
	while(scanf("%s%s",str,substr)!=EOF)
	{
		k=0;
		max=str[0];
		for(i=0;i<strlen(str);i++)
        {
			if(str[i]>max)
			{
				max=str[i];
				k=i;
			}
		}
		
        strncpy(final,str,k+1);
		for(i=0;i<3;i++)
			final[k+1+i]=substr[i];
        for(i=k+1;i<strlen(str);i++)
			final[i+3]=str[i];
        puts(final);

		for(j=0;j<11;j++)
			str[j]='\0';
		for(j=0;j<4;j++)
			substr[j]='\0';
		for(j=0;j<14;j++)
                   final[j]='\0';		
	}

}