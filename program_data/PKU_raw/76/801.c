int main()
{
	int n,i,k,flag=1,t;
	struct qj{
		int a,b;
	}d[50000],e;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&d[i].a,&d[i].b);
	}
	for(k=1;k<=n;k++){
		for(i=0;i<n-k;i++){
			if(d[i].a>d[i+1].a){
				e=d[i];
				d[i]=d[i+1];
				d[i+1]=e;
			}
		}
	}
	for(i=0;i<n-1;i++){
		if(d[i].b<d[i+1].a){
			flag=0;
			break;
		}else{
			if(d[i].b>d[i+1].b){
				t=d[i].b;
				d[i].b=d[i+1].b;
				d[i+1].b=t;
			}
		}
	}
	if(flag==0){
		printf("no");
	}else{
		printf("%d %d",d[0].a,d[n-1].b);
	}
	return 0;
}