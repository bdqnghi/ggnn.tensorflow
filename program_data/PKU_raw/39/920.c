int yuanshi(int a,int b)
{
	if(a>80&&b>=1)
		return 8000;
	else return 0;
}
int wusi(int a,int b)
{
	if(a>85&&b>80)
		return 4000;
	else return 0;
}
int chengji(int a)
{
	if(a>90) return 2000;
	else return 0;
}
int xibu(int a,char c)
{
	if(a>85&&c=='Y') return 1000;
	else return 0;
}
int banji(int b,char d)
{
	if(b>80&&d=='Y') return 850;
	else return 0;
}

int main()
{
	int a[120],b[102],c[120],i,n,qian[102],zong=0,max=0,wei;
	char mingzi[102][30],xue[102],xi[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s %d %d %c %c %d",mingzi[i],&a[i],&b[i],&xue[i],&xi[i],&c[i]);
		qian[i]=(yuanshi(a[i],c[i])+wusi(a[i],b[i])+chengji(a[i])+xibu(a[i],xi[i])+banji(b[i],xue[i]));
		zong+=qian[i];
		if(qian[i]>max) {
			max=qian[i];
			wei=i;
		}
	}
	printf("%s\n%d\n%d\n",mingzi[wei],qian[wei],zong);



		return 0;


			







}