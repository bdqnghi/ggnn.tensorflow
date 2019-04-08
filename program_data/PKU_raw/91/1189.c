void friends(char c[100],int l);
void main()
{
	char c[100];
	gets(c);
	int l=strlen(c);
	friends(c,l);
}

void friends(char c[100],int l)
{
	int i;
	char p[100];
	for(i=0;i<l-1;i++)
		p[i]=c[i]+c[i+1];
	p[l-1]=c[l-1]+c[0];
	p[l]='\0';
	puts(p);
}