int n;
int main(){
	int x,k,sum,now;//bool ff=0;
	scanf("%d",&n);int t=n;
	while (n--){
		sum=now=0;
		scanf("%d",&x);//int y=x;
		//if(y==6||ff) {printf("n=%d y=%d\n",n,y);ff=1;}
		while (x--){
			scanf("%d",&k);
			if(k-sum+now>60) continue;
			else now+=k-sum+3,sum=k;
			//if(n==0&&y==6) printf("sum=%d now=%d\n",sum,now);
		}
		if(now<60) sum+=60-now;
		printf("%d\n",sum);
	}
	return 0;
}