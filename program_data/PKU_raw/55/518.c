void main()
{
	int a,b,i,m,n,t,sum=0;
	char str[100]={'0'},s[100]={'0'},c[100]={'0'};
	scanf("%d %s %d",&a,str,&b);
	n=strlen(str);
	for (i=0;i<n;i++)
	{
		if (str[i]>=48 && str[i]<=57)
		    sum=sum*a+(int)str[i]-48;
		else
		{	if (str[i]>=65 && str[i]<=90)
                 sum=sum*a+(int)str[i]-55;
            else
			{	 if (str[i]>=97 && str[i]<=122) 
			         sum=sum*a+(int)str[i]-87;
			}
		}
	}
	for (i=0;sum!=0;i++)
	{	t=sum%b;
	    sum=sum/b;
	    if (t<=9)
			s[i]=(char)(t+48);
		else
			s[i]=(char)(t+55);
	}
	m=strlen(s);
	for (i=0;i<m;i++)
	{	c[i]=s[m-1-i];}
	for (i=0;i<m;i++)
	{	printf("%c",c[i]);}
	printf("\n");
}