 int main(){
	int n,x,i,k,q,y=0;
	int a[1000];
	scanf("%d%d",&n,&k);
	for(i=0,q=0;i<n,q<n;i++,q++){
		scanf("%d",&x);
        a[i]=x;
	}
    for(i=0;i<n-1;i++){
		for(q=i+1;q<n;q++){
			if(a[i]+a[q]==k){
				y=1;
			break;
			}
		}
		if(y==1){
		break;
		}
	}
	if(y==1){
		printf("yes");
	}else{
		printf("no");
    }
	return 0;
}