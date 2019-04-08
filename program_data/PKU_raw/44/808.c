int reverse(int num); 
int res(int q,int w,int t);
int main(){
	int n[7],n1[7],i;
	char c;
	for(i=1;i<=6;i++){
		scanf("%d",&n[i]);
		if(n[i]<0){
			n1[i]=0-n[i];
			c='-';
		}
		else{
			n1[i]=n[i];
			c='+';
		}
		if(c=='+') printf("%d\n",reverse(n1[i]));
		if(c=='-') printf("-%d\n",reverse(n1[i]));
	}
	scanf("%d",&i);
	return 0;
}
int reverse(int num){
	int j,result;
	for(j=0;;j++){
		if(num/(int)(pow(10,j))==0){
			break;
		}
	}
	result=res(num,j,0);
	return result;
}
int res(int q,int w,int t){
	int e,r;
	e=((int)(q/pow(10,t)))%10;
	r=((int)(q/pow(10,w-t-1)))%10;
	q=q+pow(10,t)*(r-e)+pow(10,w-t-1)*(e-r);
	t++;
	if(t>=w/2) return q;
	q=res(q,w,t);
	return q;
}