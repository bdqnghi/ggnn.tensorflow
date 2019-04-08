int reverse(int num){
	int i,b,k,a=1000,x=0;
	for(i=10;a>0;i=10*i,x++){
		a=num/i;
	}
	if(x==1){
		k=num;
	}
	else{
		k=(num%10);
		for(b=1;b<x;b++){
			k=k*10;
		}
		k+=reverse(num/10);
	}
	return k;
}
int main(){
	int u[10],j;
	for(j=0;j<6;j++){
		scanf("%d",&u[j]);
	}
	for(j=0;j<6;j++){
		if(u[j]==0) printf("%d\n",0);
		if(u[j]>0){
			printf("%d\n",reverse(u[j]));
		}
		if(u[j]<0){
			printf("%d\n",-reverse(-u[j]));
		}
	}
	return 0;
}
