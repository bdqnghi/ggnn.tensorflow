void main()
{
	char str[300];
	int a[52];
	int t,j,i,len;
	gets(str);
	len=strlen(str);
	for(i=0;i<52;i++)
	{
		a[i]=0;
	}
	for(i=0;i<len;i++)
	{
		for(j=0;j<=25;j++)
		{
			if((int)str[i]==j+65) a[j]=a[j]+1;
		}
		for(j=0;j<=25;j++)
		{
			if((int)str[i]==j+97) a[j+26]=a[j+26]+1;
		}
	}
	for(i=0,t=0;i<52;i++)
	{
		if(a[i]!=0) t=1;
	}
	if(t==0) printf("No");
	else
	{
		for(i=0;i<26;i++)
		{
			if(a[i]!=0)
			printf("%c=%d\n",(char)i+65,a[i]);
		}
		for(i=0;i<26;i++)
		{
			if(a[i+26]!=0)
			printf("%c=%d\n",(char)i+97,a[i+26]);
		}
	}
}
    