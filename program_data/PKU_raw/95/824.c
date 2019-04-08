


int main()
{
	char a[100],b[100],x='=';
	int i=0,m,n,s=0;
	gets(a);
	gets(b);
	if (strlen(a)>strlen(b))
		n=strlen(a);
	else
		n=strlen(b);
	while (1)
	{
	if (i==n)
	{
		if (strlen(a)>strlen(b))
		{x='>';break;}
		if (strlen(a)<strlen(b))
		{x='<';break;}
		if (strlen(a)==strlen(b))
		{x='=';break;}
	}
	if (a[i]>='A'&&a[i]<='Z'&&b[i]>='a'&&b[i]<='z')
		b[i]-=32;
	if (a[i]>='a'&&a[i]<='z'&&b[i]>='A'&&b[i]<='Z')
		a[i]-=32;
	if  (a[i]<b[i])
	{
		if (a[i]>='A'&&a[i]<='Z'&&b[i]>='a'&&b[i]<='z'&&((b[i]-32)-a[i]==32))
		{i++;continue;}
		else
		{x='<';break;}
	}
        if  (a[i]>b[i])
	{
		if (a[i]>='a'&&a[i]<='z'&&b[i]>='A'&&b[i]<='Z'&&(b[i]-a[i]==-32))
		{i++;continue;}
		else
		{x='>';break;}
	}
    i++;
	}
	printf("%c",x);


	return 0;
}
