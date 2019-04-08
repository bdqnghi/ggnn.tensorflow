int panduan(int a,int b){
	if(a==b)
		return 0;
	else if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
		return 1;
	else
		return -1;
}
int main(){
	int n,a,b,x=0;
	scanf("%d",&n);

	while(n--){
		scanf("%d%d",&a,&b);
		x+=panduan(a,b);
	}

	if(x>0)
		printf("A\n");
	else if(x==0)
		printf("Tie\n");
	else
		printf("B\n");
	
	return 0;
}