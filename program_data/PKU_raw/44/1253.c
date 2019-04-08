int reverse(int num)
{
	int zheng=abs(num);
	int sz[10],i,wei=0;
	for(i=0;i<10;i++){
		sz[i]=zheng%10;
		zheng=zheng/10;
		wei++;
		if(zheng==0)
			break;
	}
	int Reverse=0;
	for(i=0;i<wei;i++){
		Reverse=Reverse*10+sz[i];
	}
	return Reverse;
}
int main()
{
	int n,i;
	for(i=0;i<6;i++){
		scanf("%d",&n);
		if(n>0){
			printf("%d\n",reverse(n));
		}else{
			printf("%d\n",-reverse(n));
		}
		}
	return 0;
}
