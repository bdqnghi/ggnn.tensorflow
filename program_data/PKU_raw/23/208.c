int main()
{
	char str[100],ans1[50][20],ans2[50][20];
	int e,s,ls,lans1,l,i,lans2;
	gets(str);
	ls=strlen(str);
	s=0;
	e=-1;
	lans1=0;
	while(s<ls && e<ls)
	{
		l=0;
		for(s=e+1;str[s]==' '&& s<ls;s++);
		for(e=s;str[e]!=' '&&e<ls;e++);
		for(i=s;i<e;i++)
			ans1[lans1][l++]=str[i];
		ans1[lans1][l]=0;
		lans1++;
	}
	s=0;
	e=-1;
	lans2=0;
	while(s<ls && e<ls)
	{
		l=0;
		for(s=e+1;str[s]!=' '&& s<ls;s++);
		for(e=s;str[e]==' '&&e<ls;e++);
		for(i=s;i<e;i++)
			ans2[lans2][l++]=str[i];
		ans2[lans2][l]=0;
		lans2++;
	}
	for(i=lans1-1;i>=0;i--)
	{
		printf("%s",ans1[i]);
		if(i!=0)printf("%s",ans2[i-1]);
	}
	
	
	return 0;
}
