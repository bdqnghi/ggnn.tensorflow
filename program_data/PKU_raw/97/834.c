int main()
{
	int n,a;
	int sz[6];
	int money[6]={100,50,20,10,5,1};
	scanf("%d",&n);
	a=n;
	for(int i=0;i<6;i++){
		sz[i]=a/(money[i]);
		a=a%(money[i]);
	}
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",sz[0],sz[1],sz[2],sz[3],sz[4],sz[5]);
	return 0;
}