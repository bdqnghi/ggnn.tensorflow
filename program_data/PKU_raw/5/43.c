int main()
{
	int i,j,l;
	double n;
	double k;
	scanf("%lf",&n);
	char a[1000],b[1000];
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;i<=strlen(a)-1;i++)
	{
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')
		{
			printf("error");
		    return 0;
		}
	}
	for(i=0;i<=strlen(a)-1;i++)
	{
		if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')
		{
			printf("error");
			return 0;
		}
	}
	k=0;
	for(i=0;i<=strlen(a)-1;i++)
	{
		if(a[i]==b[i])
			k++;
	}
	k=k/(strlen(a));
	if(k>=n)
		printf("yes");
	else
		printf("no");
	return 0;
}

