int f(int x)
{
	int i;
   for(i=2;i<x;i++)
		if(x%i==0)return 0;
	return 1;
	}
void main()
{
	int m,i;
	scanf("%d",&m);
	for(i=2;i<=m/2;i++)
	{if(f(i)==1&&f(m-i)==1)
	printf("%d %d\n",i,m-i);}
}
