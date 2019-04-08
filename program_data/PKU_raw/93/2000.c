int main()
{
	int three(int x);
	int five(int x);
	int seven(int x);
	int print(int a,int b,int c);
	int a,b,c,x;
	scanf("%d",&x);
	a=three(x);
	b=five(x);
	c=seven(x);
	print(a,b,c);
	return 0;
}
int three(int x){
	int d;
	d=(x%3==0)?1:0;
	return d;
}
int five(int x){
	int d;
	d=(x%5==0)?1:0;
	return d;
}
int seven(int x){
	int d;
	d=(x%7==0)?1:0;
	return d;
}
int print(int a,int b,int c){
	if(a==1){
		printf("3");
		if(b==1||c==1){
			printf(" ");
		}
	} 
	if(b==1){
		printf("5");
		if(c==1){
			printf(" ");
		}
	}
	if(c==1){
		printf("7");
	}
	if(a==0&&b==0&&c==0){
		printf("n");
	}
	return 0;
}