void main()
{
	int check(char a1[],char a2[]);
	char a1[100],a2[100];
	scanf("%s%s",a1,a2);
	int m,n,re;
	m=strlen(a1);
	n=strlen(a2);
	if(m!=n)
		printf("NO\n");
	else re=check(a1,a2);
	if (re==1)
		printf("YES\n");
	else if (re==0)
		printf("NO\n");
}
int check(char a1[],char a2[])
{
	int i=0,j=0,re;
    int c1[100]={0},c2[100]={0};
	int m, p=0;
    m=strlen(a1);
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			if(a1[i]==a1[j])
				c1[i]++;
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			if(a2[i]==a2[j])
				c2[i]++;

	for(i=0;i<m;i++)
	{for(j=0;j<m;j++)
			if(a1[i]==a2[j])
				if(c1[i]==c2[j])
				{p++;break;}
	}
    if(p>=m)
		re=1;
	else re=0;
	return(re);
}




