void main()
{
    int m,n,i,j,p[26]={0},q[26]={0};
	char a[300],b[300];
    scanf("%s %s",&a,&b);
	for (i=0;i<strlen(a);i++)
	{
		for(j=0;j<26;j++)
		{
			if(a[i]==97+j)
				p[j]++;
		}
	}
	for (i=0;i<strlen(b);i++)
	{
		for(j=0;j<26;j++)
		{
			if(b[i]==97+j)
				q[j]++;
		}
	}
	for (i=0;i<26;i++)
	{
		if (p[i]!=q[i])
		{
			printf("NO");
			goto loop;
		}
	}
	printf("YES");
loop:;
}

