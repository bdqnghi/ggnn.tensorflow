void main()
{
	char d[30][20]={""},e[20]={""},f[20]={""},*a[30],*b,*c;
	int i,num=1;
	for(i=0;i<30;i++)
		*(a+i)=*(d+i);
	b=e;c=f;
	scanf("%s",*a);
	for(i=1;getchar()!='\n';i++)
	{scanf("%s",*(a+i));num=num+1;}
	scanf("%s%s",b,c);
	for(i=0;i<num;i++)
	{
		if(strcmp(*(a+i),b)==0)
		{strcpy(*(a+i),c);}
	}
	printf("%s",*a);
	for(i=1;i<num;i++)
	{
		printf(" %s",*(a+i));
	}
}