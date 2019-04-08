void main()
{
	char s[50],w[50];
	int a,b,i,j,p;
	scanf("%s%s",s,w);
    a=strlen(s);
	b=strlen(w);
	p=0;
	for(i=0;i<=b-1;i++)
	{
		for(j=0;j<=a-1;j++)
		{
			if(s[j]!=w[i+j])
				break;
			if(j==a-1)
				printf("%d\n",i);
			p=1;
		}
		if(p==1)
			break;
	}
}