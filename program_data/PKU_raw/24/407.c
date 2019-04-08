void main()
{
	char str[1000],l[20],s[20],a[20];
	int i,j,m,max=0,min=100;
	gets(str);
	m=strlen(str);
	for(i=0;i<m;i++)
	{
		for(j=0;((str[i]<='z')&&(str[i]>='a'))||((str[i]<='Z')&&(str[i]>='A'));i++,j++)
			a[j]=str[i];
		a[j]='\0';
		if(strlen(a)>max)
		{
			strcpy(l,a);
			max=strlen(a);
		}
		if(strlen(a)<min)
		{
			strcpy(s,a);
			min=strlen(a);
		}
	}
	printf("%s\n%s\n",l,s);
}