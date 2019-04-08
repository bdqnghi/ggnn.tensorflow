
main()
{
	int i,j;
	char *p,s[100][100],c;
	c=' ';
	i=0;
	p=*s;
	while (c==' ') 
	{
		scanf("%s",p);
		c=getchar();
		i++;
        p=*(s+i);
	}
    for (j=i-1;j>0;j--)
	{
		p=*(s+j);
		printf("%s ",p); 
	}
	p=*s;
    printf("%s\n",p);
}