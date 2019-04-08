int main()
{
	double k,h=0;
	char a[1000],b[1000];
	int i,n,m;
	scanf("%lf",&k);
	scanf("%s",a);
	scanf("%s",b);
	n=strlen(a);
	m=strlen(b);
	if(n!=m)
		printf("error");
	else
	{
	for(i=0;i<n;i++)
	{
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')
		{
			printf("error");
			break;
		}
		else if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')
		{
			printf("error");
			break;
		}
		else
		{
			if(a[i]==b[i])
				h++;
		}
	}
	h=h*1.0/n;
	if(h>k)
		printf("yes");
	else if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C'&&b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')
		printf("no");
	}
	return 0;
}