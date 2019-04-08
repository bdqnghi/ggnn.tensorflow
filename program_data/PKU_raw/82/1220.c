int main(){
	int n,x,y;
	int i=1;
	int max=0;
	int time=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d %d\n",&x,&y);
		if(x>=90 && x<=140 && y>=60 && y<=90){
			time+=1;
			if(time>=max){
				max=time;
			}
		}else{
			time=0;
		}
	}
	printf("%d",max);
	return 0;
}
