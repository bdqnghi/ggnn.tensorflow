void main()
{
	char str[3000];
	int i,j=0,k;
	char *p;
	gets(str);
	p=str;
	for(i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)!=' ')
		{
			j++;k=0;
		}
		else if(k==0)
		{
			printf("%d,",j);
			k=1;j=0;
		}
	}
	printf("%d\n",j);
}