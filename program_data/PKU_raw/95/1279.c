int main()
{
	int i;
	char x[100],y[100];
	gets(x);
	gets(y);
	int lenx=strlen(x);
	int leny=strlen(y);
	for(i=0;i<lenx;i++)
	{
		if(x[i]>'A'&&x[i]<='Z')
			x[i]+=32;
	}
	for(i=0;i<leny;i++)
	{
		if(y[i]>'A'&&y[i]<='Z')
			y[i]+=32;
	}
	if(strcmp(x,y)>0)
		printf(">");
	else
	{
		if(strcmp(x,y)<0)
			printf("<");
		else 
			printf("=");
	}
	return 0;
}