void main()
{
	char a[10000];
	int m[300]={0},*p,*q,i;
	p=m;
	q=m;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
			(*p)++;
		else
		{
			p++;
			q++;
		}

	}
	for(p=m;p<q;p++)
		if(*p!=0)
		printf("%d,",*p);
	printf("%d\n",*q);
}