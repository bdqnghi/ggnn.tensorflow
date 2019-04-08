int run(int n)
{
	if(n%4==0&&n%100!=0)
		return 1;
	if(n%400==0)
		return 1;
	return 0;
}
int yue(int y,int n)
{
	if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
		return 31;
	if(run(y)==1&&n==2)
		return 29;
	if(run(y)==0&&n==2)
		return 28;
	return 30;
}
int days(int y,int m,int d)
{
	int k=0;
	for(int i=1;i<m;i++)
		k+=yue(y,i);
	k+=d;
	return k;
}
int main()
{
	int y,m,d;
	scanf("%d %d %d",&y,&m,&d);
	printf("%d",days(y,m,d));
	return 0;
}