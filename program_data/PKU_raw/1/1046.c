int f(int c,int t);
void main()
{
	int n,c;
	scanf("%d",&n);
	for(;n>0;n--)
	{
		scanf("%d",&c);
		if(c==1 || c==2)
			printf("1\n");
		else
			printf("%d\n",f(c,2));
	}
	}
int f(int c,int t)
{
	int count=1,i;
	for(i=t;i<c;i++)
	{
		if(c%i==0)
			count+=f(c/i,i);
	}
	if(i==c)	return count;
	else		return 0;
}