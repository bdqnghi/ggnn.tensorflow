void main()
{
	char str[10],strc[13],substr[3],max,num;
	int i,n;
	while(scanf("%s%s",str,substr)!=EOF)
	{
		n=strlen(str);
		max=0;
		for(i=0;i<n;i++)
		{
			if(str[i]>max) 
			{
				max=str[i];
				num=i;
			}
		}
		for(i=0;i<=num;i++)
		{
			strc[i]=str[i];
		}
		for(i=num+1;i<=num+3;i++)
		{
			strc[i]=substr[i-num-1];
		}
		for(i=num+4;i<n+3;i++)
		{
			strc[i]=str[i-3];
		}
		strc[n+3]='\0';
		printf("%s\n",strc);
	}
}
