int main()
{
	char a[100],b[100];
	int i=0;
	gets(a);
	gets(b);
	while(a[i]!='\0')
	{
		if(a[i]>=97)
			a[i]=a[i]-32;
                 i++;
	}
	i=0;
	while(b[i]!='\0')
	{
		if(b[i]>=97)
			b[i]=b[i]-32;
                i++;
	}
		if(strcmp(a,b)>0)
		printf(">");
		if(strcmp(a,b)<0)
		printf("<");
		if(strcmp(a,b)==0)
	    printf("=");
		return 0;
}