void main()
{
	char a[301];
	int b[500]={0};
	int i,flag;
	for(i=0;i<=300;i++)
	{
		a[i]='\0';
	}
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		b[a[i]-'a'+1]++;
	}
	flag=0;
	for(i=1;i<=26;i++)
	{
		if(b[i]!=0)
		{
			printf("%c=%d\n",i+'a'-1,b[i]);
			flag=1;
		}
	}
	if (flag==0) printf("No");

}