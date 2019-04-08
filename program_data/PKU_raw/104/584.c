int choose(int x,int y)
{
	if(x==y)return x;
	if(x>y)return choose(x/2,y);
	else return choose(x,y/2);
}
void main()
{
	int choose(int x,int y);
	int m,n,k;
	scanf("%d%d",&m,&n);
	k=choose(m,n);
	printf("%d\n",k);
}
