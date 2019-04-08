int main(){
	int n,a,b,c,d;
	scanf("%d",&n);
	a=n/10000;
	b=n/1000;
	c=n/100;
	d=n/10;
	if(a!=0){
		printf("%d%d%d%d%d",n%10,d%10,c%10,b%10,a);
	}else if(b!=0){
	printf("%d%d%d%d",n%10,d%10,c%10,b);
	}else if(c!=0){
	printf("%d%d%d",n%10,d%10,c);
	}else if(d!=0){
	printf("%d%d",n%10,d);
	}else{
	printf("%d",n);
	}
	
	return 0;
}
