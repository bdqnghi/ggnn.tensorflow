void main()
{
	char a[30][20]={""},b[20]={""},c[20]={""};
	int i,num=1;
	scanf("%s",a[0]);
	for(i=1;getchar()!='\n';i++)
	{scanf("%s",a[i]);num=num+1;}
	scanf("%s%s",b,c);
	for(i=0;i<num;i++)
	{
		if(strcmp(a[i],b)==0)
		{strcpy(a[i],c);}
	}
	printf("%s",a[0]);
	for(i=1;i<num;i++)
	{
		printf(" %s",a[i]);
	}
}