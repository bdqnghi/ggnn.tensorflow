void main()
{
	char a[302];
	int b[26];
	char c[26];
	int i,j,p;
	gets(a);
	for(i=0;i<=25;i++)
	    c[i]=97+i;
	for(i=0;i<=25;i++)
	    b[i]=0;
	p=0;
	for(i=0;i<=25;i++)
	{
		for(j=0;a[j]!='\0';j++)
		{
			if(a[j]==97+i)
				b[i]++;
		}
		if(b[i]!=0)
		{
			printf("%c=%d\n",c[i],b[i]);
			p=1;
		}
	}
	if(p==0)printf("No");
}