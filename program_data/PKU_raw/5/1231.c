int main()
{
	int i,l1,l2,t;
	char a[500],b[500];
	double n;
	scanf("%lf\n",&n);
	scanf("%s",a);
	scanf("%s",b);
    l1=strlen(a);
	l2=strlen(b);
	if(l1!=l2)
	{
		printf("error");
		return 0;
	}
	t=0;
	for(i=0;i<l1;i++)
	{
		if((a[i]=='A'||a[i]=='T'||a[i]=='G'||a[i]=='C')&&(b[i]=='A'||b[i]=='T'||b[i]=='G'||b[i]=='C'))
		{
			if(a[i]==b[i])
				t++;
		}
		else 
		{
			printf("error");
			return 0;
		}
	}
	if(1.0*t/l1>=n) printf("yes");
	else printf("no");
	return 0;
}