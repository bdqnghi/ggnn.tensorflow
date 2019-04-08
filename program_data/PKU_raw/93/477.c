int main(){
	int n,a,b,c;
	scanf("%d",&n);
	a=n%3;
	b=n%5;
	c=n%7;
	if(a==0&&b==0&&c==0){
		printf("3 5 7");
	}else if(a==0&&b==0){
		printf("3 5");
	}else if(a==0&&c==0){
		printf("3 7");
	}else if(b==0&&c==0){
		printf("5 7");
	}else if(a==0){
		printf("3");
	}else if(b==0){
		printf("5");
	}else if(c==0){
		printf("7");
	}else{
		printf("n");
	}
	return 0;
}
