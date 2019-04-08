int f(int n){
	int sz[15];
	int i,k,m=0,t;
	if(n<0){
		t=-1;
	}else if(n>0){
		t=1;
	}else{
		t=0;
	}
	n=fabs(n);
	for(i=1;;i++){
		if(n<pow(10,i)){
			break;
		}
	}
	for(k=0;k<i;k++){
		sz[k]=n/pow(10,i-k-1);
		n-=sz[k]*pow(10,i-k-1);
	}
	for(k=0;k<i;k++){
		m+=sz[k]*pow(10,k);
	}
	return m*t;
}
int main(){
	int n,i;
	for(i=1;i<=6;i++){
		scanf("%d",&n);
		printf("%d\n",f(n));
	}

}