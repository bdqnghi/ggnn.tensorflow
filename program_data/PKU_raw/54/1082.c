int divide(int m,int n,int k,int i){  //i???????????
	if((m-k)%n!=0)
		return 0;
	else{
		if(i==1)
			return m;
		else{ 
			m=(m-k)/n*(n-1);
			i--;
			return divide(m,n,k,i);
		}
	}
}
int main(){
	int m,n,k,left;
	scanf("%d%d",&n,&k);
	for(m=k;;m++){
		left=divide(m,n,k,n);
		if(left-k>=n){
			printf("%d",m);
			break;
		}
	}
	return 0;
}