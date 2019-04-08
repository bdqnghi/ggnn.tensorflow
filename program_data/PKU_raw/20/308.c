void main()
{
    char str[20]={0},substr[4]={0},max=0,medium[20]={0};
	int i,j,length,mark;
	while(scanf("%s%s",str,substr)==2)
	{
        max=0;length=strlen(str); 
		for(i=0;i<length;i++)
		{
			if(max<str[i])
			{max=str[i];mark=i;}
		}
        for(j=0,i=mark+1;i<length;i++,j++)
		{
			medium[j]=str[i];str[i]=0;
		}
        strcat(str,substr);
		strcat(str,medium);
		printf("%s\n",str);
		for(i=0;i<10;i++)
		{
			medium[i]=0;str[i]=0;
		}
	}
	
	
}