main()
{
	char a[101],sh[101];
	int shang,ys,i,l,ws=0;
	gets(a);
	l=strlen(a);
	shang=0;
	ys=0;
	for(i=0;i<=l-1;i++)
	{
		shang=(ys*10+a[i]-'0')/13;
		if((shang==0&&ws!=0)||shang!=0)
		{
			sh[ws]=shang+'0';
			ws++;
			ys=(ys*10+a[i]-'0')%13;
		}
		else
		{
			ys=ys*10+a[i]-'0';
		}
	}
	if(ws==0)
	{
		sh[ws]='0';
		ws++;
	}
	sh[ws]='\0';
	puts(sh);
	printf("%d",ys);
	return 0;
}
	