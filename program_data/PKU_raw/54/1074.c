int f(int n, int k);
int main()
{
int n1,k1,m;
scanf("%d %d",&n1,&k1);
m=f(n1,k1);
printf("%d",m);
	return 0;
}
int f(int n, int k)
{
	int nazou, naqian,i,lastnazou;
	lastnazou=1;
	nazou=lastnazou;
	for(i=0;i<n-1;i++){
		if((n*nazou+k)%(n-1)==0){
		nazou=(n*nazou+k)/(n-1);
		naqian=n*nazou+k;
		}else{
		lastnazou++;
		nazou=lastnazou;
		i=-1;
		}
	}
	return naqian;
}