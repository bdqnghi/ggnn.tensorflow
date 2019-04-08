void main()
{
	char *p;
	char s[101];
	char a[101];
	int i,l,t;
	int x=0;
	scanf("%s",s);
	l=strlen(s);
	for(t=0,i=0;i<l;i++)
	{
		t=t+s[i]-'0';
		a[i]=t/13+'0';
		if(t>=13)
			t=t%13*10;
		else
			t=t*10;
	}

	t=t/10;
	a[l]=0;
	if(l==1)
		printf("%c\n%c\n",'0',s[0]);
	else if (l==2&&(s[0]-'0')*10+s[1]-'0'<13)
		printf("%c\n%s\n",'0',s);
	else
	{
		for(i=0;i<l;i++)
			if(a[i]!='0')
			{
				p=&a[i];
				break;
			}
			printf("%s\n%d\n",p,t);
	}
}
	