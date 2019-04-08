
int main(){
	int i,n,m,x[110],ctr,time;
	scanf("%d",&n);
	while(n--){
		ctr=0;
		time=0;
		scanf("%d",&m);
		for(i=1;i<=m;i++){
			scanf("%d",&x[i]);
			if(time+x[i]-ctr<=60)
			{
				time+=x[i]-ctr+3;
				ctr=x[i];
			}
		}
		if(time<60)
			ctr+=60-time;
		printf("%d\n",ctr);
	}
	return 0;
}