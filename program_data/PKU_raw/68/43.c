int k(int p){
	int i,h,a=1;
	if(p%2==0){
		if(p==2){
			return a;
		}
		a=0;
		return a;
	}
	h=p/2;
	for(i=3;i<=h;i++){
		if(p%i==0){
			a=0;
			break;
		}
	}
	return a;
}
		
int main(){
    int n,i,m;
	int k1,k2;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2){
		for(m=2;m<=i;m++){
		   k1=k(m);
		   k2=k(i-m);
		   if(k1==1&&k2==1){
			   printf("%d=%d+%d\n",i,m,i-m);
			   break;
		   }
		}
	}
	return 0;
}