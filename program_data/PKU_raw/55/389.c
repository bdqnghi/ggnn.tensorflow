main()
{
	int a,b,len,i,j;
	long mi,middle=0;
	char str[33] ;
	scanf("%d%s%d",&a,str,&b);
	len=strlen(str);
	for(i=0;i<len;++i)
	
		if(str[i]>=97&&str[i]<=122)
			str[i]-=32;
	for(i=0;i<len;++i)
	{
		if(str[i]>=65&&str[i]<=90)
			str[i]-=55;
		else str[i]-=48;
		mi=1;
		for(j=1;j<len-i;++j)
			mi*=a;
		middle=middle+str[i]*mi;
	}
	i=0;
	while(middle>=b)
	{
		str[i]=middle%b;
		middle=(middle-str[i])/b;
		i++;
	}
	str[i]=middle;
	for(j=0;j<=i;++j)
	{
		if(str[i-j]>9)
		{
			str[i-j]=str[i-j]-9+64;
			printf("%c",str[i-j]);
		}
		else printf("%d",str[i-j]);
	}
}