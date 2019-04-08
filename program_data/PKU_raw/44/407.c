int reverse(int num);
int main(){
	int k,n;
	for(k=0;k<6;k++){
		scanf("%d",&n);
		printf("%d\n",reverse(n));
	}
	return 0;
}
int reverse(int num){
		int i,x,r,a=1;
		r=0;
		if(num<0){
			num=-num;
			a=-1;
		}
		for(i=1;i<12;i++){
			if(num<pow(10,i)){
				x=i;
				break;
			}
		}
		for(i=0;i<x;i++){
			if(i==0){
				r+=num%10*(int)(pow(10,x-1));
			}
			else{
				r+=(num%(int)(pow(10,i+1))-num%(int)(pow(10,i)))/(int)(pow(10,i))*(int)(pow(10,x-i-1));
			}
		}
		r=a*r;
		return r;
}