int zhishu(int num){
	int n=0,i;
	for(i=1;i<=num;i++){
		if(num%i==0){
			n++;
		}
	}
	if(n==2){
		return 1;
	}else{
	    return 0;
	}
}
int huiwenshu(int num){
    int k=0,x=0;
	int i,sz[100];
	for(i=num;i>0;i/=10){
        sz[k]=i%10; 
		k++;
	}
	for(i=0;i<k/2;i++){
		if(sz[i]==sz[k-1-i]){
			x++;
		}
	}
	if(x==k/2){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int m,n,i,t=1,k=1;
	scanf("%d %d",&m,&n);
	for(i=m;i<n+1;i++){
		if(zhishu(i)==1 && huiwenshu(i)==1){
			if(t){
				printf("%d",i);
				t=0;
				k=0;
			}else{
				printf(",%d",i);
			}
		}
	}
	if(k){
		printf("no");
	}
	return 0;
}