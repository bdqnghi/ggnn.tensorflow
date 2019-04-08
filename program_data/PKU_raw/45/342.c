
int main()
{
	char a[100],b[100];
	char *p;
	int i=0;
	scanf("%s %s",a,b);
	p=b;
	while(p!=strstr(b,a))
	{p++;
	i++;}
	printf("%d\n",i);
	
	return 0;
}