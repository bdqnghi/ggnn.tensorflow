int main()
{
    char a[501];
	char b[501];
	int i,n,j,k;
	float v;
	j=0;
	k=0;
	n=0;
	scanf("%f",&v);
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;a[i]!='\0';i++)
	{
		j=j+1;
		if((a[i]!='A')&&(a[i]!='T')&&(a[i]!='C')&&(a[i]!='G'))
		{
			printf("error");
			return 0;
		}
	}
	for(i=0;b[i]!='\0';i++)
	{
		k=k+1;
		if((b[i]!='A')&&(b[i]!='T')&&(b[i]!='C')&&(b[i]!='G'))
		{
			printf("error");
			return 0;
		}
	}
	if(j!=k)
	{
		printf("error");
		return 0;
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b[i])
		{
			n=n+1;
		}
	}
	if(v*j<n)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}