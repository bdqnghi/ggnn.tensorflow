int main()
{
	double n;
	scanf("%lf",&n);
	char a[502],b[502];
	int l1,l2;
	scanf("%s",&a);
	scanf("%s",&b);
	l1=strlen(a);
	l2=strlen(b);
	int i,k=0,flag;
	for(i=0;i<l1;i++)
		if(a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T')
		{flag=1;}
	for(i=0;i<l1;i++)
		if(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T')
		{flag=1;}
	if(l1!=l2||flag==1)
	{
		printf("error");
	}
	else
	{
		for(i=0;i<l1;i++)
		{
			if(a[i]==b[i])
			{k++;}
		}
		if(1.0*k/l1>=n)
		{
			printf("yes");
		}
		else 
			printf("no");
	}
	return 0;                               
}