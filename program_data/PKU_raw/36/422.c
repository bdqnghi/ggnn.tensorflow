void main()
{
	int len1,len2,i,j;
	char t;
	char a1[10],a2[10];
	char *p1=a1,*p2=a2;
	scanf("%s%s",a1,a2);
	len1=strlen(a1);
	len2=strlen(a2);
	if(len1==len2)
	{
    for(i=0;i<=len1-1;i++)
	{
		for(j=i;j<=len1-1;j++)
			if(*(p1+i)==*(p2+j))
			{t=*(p2+i);*(p2+i)=*(p2+j);*(p2+j)=t;break;}
        if(j==len1)
		{printf("NO");break;}
	}
	if(i==len1)
		printf("YES");
	}
	else printf("NO");
}