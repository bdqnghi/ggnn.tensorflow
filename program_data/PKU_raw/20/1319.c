int choose(char str[],int k)
{
	int i,max,maxc;
	maxc=str[0];
    max=0;
	for(i=0;i<k;i++)
	{
		if(str[i]>maxc)
		{
			maxc=str[i];
			max=i;
		}
	}
	return max;
}
main()
{
		static char str[15],substr[4];
        while (scanf("%s%s",str,substr)!=EOF)
	{

	
	int k;
	k=strlen(str);
	int max;
	max=choose(str,k);
	static char cs[11];
	int i;
	for(i=max+1;i<k;i++)
	{
		cs[i]=str[i];
	}
	for(i=max+1;i<=max+3;i++)
	{
		str[i]=substr[i-max-1];
	}
	for(i=max+4;i<k+3;i++)
	{
		str[i]=cs[i-3];
	}
	str[k+3]='\0';
	puts(str);
	}
	return 0;
}

