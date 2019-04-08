void main()
{
	char str[15],nstr[15];
	char maxchar='\0';
	int i,j,len,max=0;
	while(1)
	{
		maxchar='\0';
		if ((str[0]=getchar())==EOF)
			exit(-1);
		gets(&str[1]);
		len = strlen(str);
		for(i=len-5;i>=0;i--)
		{
			if (str[i]>=maxchar)
			{
				max=i;
				maxchar=str[i];
			}
		}
		for(i=0;i<=max;i++)
		{
			nstr[i]=str[i];
		}
		for(i=max+1;i<len-4;i++)
		{
			nstr[i+3]=str[i];
		}
		for(i=len-3,j=1;i<len;i++,j++)
		{
			nstr[max+j]=str[i];
		}
		nstr[len-1]='\0';
		printf("%s\n",nstr);		
	}
}
