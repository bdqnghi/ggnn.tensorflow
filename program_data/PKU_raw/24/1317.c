
void main()
{
	int m=0,n=10000,l;
	char *max,*min,*s,b;
	max=(char *)malloc(100*sizeof(char));
	min=(char *)malloc(100*sizeof(char));
	s=(char *)malloc(100*sizeof(char));
	for (;;)
	{
		scanf("%s",s);
		l=strlen(s);
		if (l<n) 
		{
			strcpy(min,s);
			n=l;
		}
		if (l>m) 
		{
			strcpy(max,s);
			m=l;
		}
		b=getchar();
		if (b!=' ') break;
	}
	printf("%s\n%s\n",max,min);
}