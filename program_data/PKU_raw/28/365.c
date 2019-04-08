int main()
{
	int n,i=0;
	char a[10000],*p;
	gets(a);
	n=strlen(a);
	for(p=a;p<a+n;p++)
	{
		if(*p==' ')
		{
			if(i!=0)printf("%d,",i);
			i=0;
		}
		else i++;
		if(p==a+n-1)break;
	}
	printf("%d",i);
}