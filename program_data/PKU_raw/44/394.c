int reverse(int num){
	int fz,w,g,k,t,a;
	fz=0;
	w=0;
	if(num<=0){
		t=-1;
		num=-num;}
	else{t=1;}
		a=num;
	while(num/10>=1){
		w=w+1;
		num=num/10;
	}
	num=a;
	for(k=0;k<=w;k++){
		g=pow(10,w-k);
		fz=fz+(num%10)*g;
		num=num/10;
	}
	return t*fz;
}
int main(){
	int m,i;
	for(i=0;i<6;i++){
		scanf("%d",&m);
		printf("%d\n",reverse(m));
	}
	return 0;
}