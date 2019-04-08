void main()
{
	char s[256],t[256],h[256];
	scanf("%s %s %s",s,t,h);
	int ss=strlen(s),tt=strlen(t);
	int i,j,count=0,place=-1;
	for(i=0;i<ss;i++)
	{
		count=0;
		for(j=0;j<tt;j++)
		{
			if(t[j]-s[i+j]==0)
				count++;
		}
		if(count==tt)
		{
			place=i;
			break;
		}
	}
	if(place==-1)
		printf("%s",s);
	else
	{
	for(i=0;i<place;i++)
	{
		printf("%c",s[i]);
	}
	printf("%s",h);
	for(i=place+tt;i<ss;i++)
	{
		printf("%c",s[i]);
	}

	}


}