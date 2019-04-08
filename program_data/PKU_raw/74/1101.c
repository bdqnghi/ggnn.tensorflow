int check1(int n)
{
	int i,flag=1;
	for (i=2;i<=(int)fabs(sqrt(n));i++)
		if (n%i==0)
		{flag=0;break;}
	return(flag);
}
int check2(int n)
{
	int a[10],i,l=0,flag=1;
	while (n>0)
	{l++;a[l]=n%10;n=n/10;}
	for (i=1;i<=l/2;i++)
		if (a[i]!=a[l+1-i])
		{flag=0;break;}
    return(flag);
}
void main()
{
	int flag=0,i,m,n;
	scanf("%d%d",&m,&n);
	for (i=m;i<=n;i++)
		if (check1(i) && check2(i))
		{
			if (flag==0)
			{flag=1;printf("%d",i);}
			else
			  printf(",%d",i);
		}
	if (flag==0) printf("no\n"); else printf("\n");
}