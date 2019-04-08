void main()
{
	int f(char *p,int x);
	char s[10000];
	int i,j=0,temp;
	gets (s);
	for(i=0;s[i]!=' '&&s[i]!='\0';i++)
	{j++;}
	printf("%d",j);
	for(i=j;s[i]!='\0';i++)
	if(s[i]==' '&&s[i+1]!=' ')
	{temp=f(s,i+1);printf(",%d",temp);}
}

int f(char *p,int x)
{
	int n;
	n=0;
	p=p+x;
	while(*p!=' '&&*p!='\0')
	{n++;p++;}
	return n;
}