main()
{
	char (*a)[100],c[100][100];
	int i;
	a=c;
	for(i=0;;i++)
	{scanf("%s",c[i]);
	if(getchar()=='\n') break;}
	for(a=c+i;a!=c;a--)
		printf("%s ",*a);
       printf("%s",*a);
}