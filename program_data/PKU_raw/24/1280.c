void main()
{
	int i,max=0,min=100;
	char *p[50];
	for(i=0;;i++)
	{
		p[i]=(char *)calloc(1,30);
		scanf("%s",p[i]);
		if(strlen(p[i])>max) max=strlen(p[i]);
		if(strlen(p[i])<min) min=strlen(p[i]);
		if(getchar()=='\n') break;	
	}
	for(i=0;;i++)
		if(strlen(p[i])==max) {printf("%s\n",p[i]);break;}
	for(i=0;;i++)
		if(strlen(p[i])==min) {printf("%s\n",p[i]);break;}
}
