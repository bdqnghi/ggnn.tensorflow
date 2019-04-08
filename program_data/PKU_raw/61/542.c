int f(int n);
int main(){
	int a0,a1,i,n,l,sz[100];
	scanf("%d",&l);
	for(i=0;i<l;i++){
		scanf("%d",&n);
//		printf("%d",f(n));
		sz[i]=f(n);
	}
	for(i=0;i<l;i++){
		printf("%d\n",sz[i]);
	}
	return 0;
}
int f(int n){
	int a0,a1,a2,i,r;
	a0=1;
	a1=1;
	r=0;
	if(n==1){
		return 1;
	}
	else if(n==2){
		return 1;
	}
	else if(n>2){
	for(i=0;i<n-2;i++){
		a2=a0+a1;
		r=a2;
		a0=a1;
		a1=a2;
	}
	}
	return r;
}
//1,1,2,3,5,8