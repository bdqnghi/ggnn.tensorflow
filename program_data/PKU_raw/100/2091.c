void main()
{
	char str[300];
	int i,j,len,s=0;
	gets(str);
	len=strlen(str);
	int count[200];



	for(i=65;i<=90;i++)
	{
	    count[i]=0;//
		for(j=0;j<len;j++)
		{
			if(str[j]==i)count[i]+=1;
		}
		if(count[i]!=0)
		{
	    	printf("%c=%d\n",i,count[i]);
		}
	}

	for(i=97;i<=122;i++)
	{
	    count[i]=0;//
		for(j=0;j<len;j++)
		{
			if(str[j]==i)count[i]+=1;
		}
		if(count[i]!=0)
		{
	    	printf("%c=%d\n",i,count[i]);
		}
	}
	
	for(i=65;i<=90;i++)
	{
		s+=count[i];
	}
	for(i=97;i<=122;i++)
	{
		s+=count[i];
	}

	if(s==0)printf("No");
}



