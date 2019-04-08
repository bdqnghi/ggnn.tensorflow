int main()
{
    int i,j,k=0,l,m,n;
	double s,z;
	char a[500],b[500];
	scanf("%lf",&s);
	scanf("%s",a);
	scanf("%s",b);
	l=strlen(a);
	j=strlen(b);
	if(l!=j)
	{
		printf("error\n");
		return 0;
	}
	for(i=0;i<l;i++)
	{
		if((a[i]!='A' && a[i]!='T' && a[i]!='C' && a[i]!='G')||(b[i]!='A' && b[i]!='T' && b[i]!='C' && b[i]!='G'))
		{
			printf("error\n");
			return 0;
		}
		if(a[i]==b[i])
		{
			k++;
		}
	}
    z=(double)k/l;
	if(z>=s)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}

