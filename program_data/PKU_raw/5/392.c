int main()
{
	int i,t=0,s=0,l1,l2;
	double n,m;
    char a[256],b[256];
	scanf("%lf",&n);
	scanf("%s",&a);
	scanf("%s",&b);
	l1=strlen(a);
	l2=strlen(b);
	for(i=0;i<l1;i++)
	{
		if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'))
		{
			s=s+1;
		}
	}
	if(s!=0||l1!=l2)
	{
		printf("error");
	}
	else
	{
		for(i=0;i<l1;i++)
		{
			if(a[i]==b[i])
			{
				t=t+1;
			}
		}
		m=(double)t/l1;
		if(m>n)
		{
			printf("yes");
		}
		else printf("no");
	}
return 0;
}  