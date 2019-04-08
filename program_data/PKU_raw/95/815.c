void main()
{
	char a[100],b[100];
	char g,h;
	int i,n1,n2;
	gets(a);
	gets(b);
	n1=strlen(a);
	n2=strlen(b);


	for(i=0;i<n1;i++)
	{
		g=a[i];
		if(g<97)
		{
			g=g+32;
			a[i]=g;
		}
	}
	for(i=0;i<n2;i++)
	{
		h=b[i];
		if(h<97)
		{
			h=h+32;
			b[i]=h;
		}
	}
	if(strcmp(a,b)==0)
		printf("=");
	else if(strcmp(a,b)<0)
		printf("<");
	else if(strcmp(a,b)>0)
		printf(">");
}
