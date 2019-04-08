int main()
{
	int chek(int a,int b,int c);
	int n,k,m;
	scanf("%d %d",&n,&k);
	for(m=n+k;;m++)
	{
		if(chek(n,k,m)==1)
			break;
	}
	printf("%d",m);
	return 0;
}
int chek(int A,int B,int C)
{
	int x=1,j=0;
	while(C%A==B&&C>A&&x>=1)
	{
		x=(C-B)/A;
		C=C-B-x;
		j++;
	}
	if(j==A)
		return 1;
	else
		return 0;
}