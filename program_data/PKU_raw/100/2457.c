int main()
{
	int a[128]={0};
	char s[350]={'\0'};
	int i,len,tem,flag=0;
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		tem=s[i]-'0';
		if(tem>='a'-'0'&&tem<='z'-'0')
		{
			
			a[tem]++;
		}
		else if(tem>='A'-'0'&&tem<='Z'-'0')
		{
			a[tem]++;
		}
	}
	for(i='A'-'0';i<='Z'-'0';i++)
	{
		if(a[i]!=0)
		{
			flag++;
			printf("%c=%d\n",i+'0',a[i]);
		}
	}
	for(i='a'-'0';i<='z'-'0';i++)
	{
		if(a[i]!=0)
		{
			flag++;
			printf("%c=%d\n",i+'0',a[i]);
		}
	}
	if(flag==0)
	{
		printf("No");
	}
	return 0;
}