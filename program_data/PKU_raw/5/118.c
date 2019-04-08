int main()
{
	double m,aver;
	int n,i,j,k=0,l=0;
	char a[500],b[500];
	scanf("%lf",&m);
	scanf("%s",a);
	scanf("%s",b);
	if(strlen(a)!=strlen(b))
	{
		k++;
	}
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'&&b[i]!='A'&&b[i]!='C'&&b[i]!='T'&&b[i]!='G')
		{
		k++;
		}
	}
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==b[i])
		{
			l++;
		}
		
	}
	aver=1.0*l/strlen(a);
	if(k!=0)
	{
		printf("error");
	}
	if(k==0)
	{
		if(aver>m)
		{
		printf("yes");
		}
		else
		{
		printf("no");
		}
	}
	return 0;
}
