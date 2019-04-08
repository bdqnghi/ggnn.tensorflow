int main()
{
    char str[100];
	int i;
	gets(str);
	int n;
	n=strlen(str);
    for(i=0;i<(n-1);i++)
	{
		int p,q;
		p=(int)str[i];
		q=(int)str[i+1];
		printf("%c",p+q);
	}
	int p,q;
	p=(int)str[0];
	q=(int)str[n-1];
	printf("%c",p+q);
	return 0;
}