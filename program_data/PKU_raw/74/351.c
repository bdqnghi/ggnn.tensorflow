int rev(int i);
int shu(int j);
void main()
{
	int m,n,i,t;
	scanf("%d %d",&m,&n);
	t=0;
	for (i=m;i<=n;i++)
		if (rev(i)&&shu(i))
		{
			if (t!=0) printf(",");
			printf("%d",i);
			t=1;
		}
	if (t==0) printf("no");
}

int rev(int i)
{
	int k,s=0;
	k=i;
	while (i!=0)
	{
		s=s*10+i%10;
		i=i/10;
	}
	if (s==k) return 1;
	else return 0;
}
int shu(int i)
{
	int j;
	for (j=2;j<=sqrt(i);j++)
		if (i%j==0) return 0;
	return 1;
}


	