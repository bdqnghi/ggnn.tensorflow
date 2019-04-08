int main()
{
	int n,i,m,max=0,p1,min=70,p2;
	char a[203][40];
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",*(a+i));
	}
    for(i=1;i<=n;i++)
	{
		m=strlen(*(a+i));
		if(m>max)
		{
			max=m;
			p1=i;
		}
		if(m<min)
		{
			min=m;
			p2=i;
		}
	}
    printf("%s\n%s",*(a+p1),*(a+p2));
	return 0;
}