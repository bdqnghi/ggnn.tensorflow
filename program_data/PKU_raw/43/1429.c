int sushu(int x)
{
	int j;
	for(j=2;j<x;j++)
	{
		if(x%j==0) break;
	}
	if(j==x) return 1;
	else return 0;
}

int main()
{
	int m,a,b;
	int i,j;
	scanf("%d",&m);
	for(i=3;i<=m-i;i++)
	{
		a=sushu(i);
		b=sushu(m-i);
		if(a==1&&b==1) printf("%d %d\n",i,m-i);
	}

    return 0;
} 