void main()
{
	char str[20000];
	int i,count=0,flag=0;
	for(i=0;i<20000;i++)
		str[i]='\0';
	gets(str);
    for(i=0;i<20000;i++)
	{
		if(str[i]!=' '&&str[i]!='\0') count++;
		else 
		{ 
			if(count!=0)
			{
				flag++;
				if(flag==1) printf("%d",count);
	    	    else printf(",%d",count);
			}
           count=0;
		}
	}
}
