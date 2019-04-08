int main(){
	int n;
    scanf("%d",&n);
    int i=0;
	while (n>=100){
		n=n-100;
		i=i+1;
	}
	int a=0;
	while (n>=50){
		n=n-50;
		a=a+1;
	}
	int b=0;
	while (n>=20){
		n=n-20;
		b=b+1;
	}
	int c=0;
	while (n>=10){
		n=n-10;
		c++;
	}
	int d=0;
	while (n>=5){
		n=n-5;
		d++;
	}
	int e=0;
	while (n>=1){
		n=n-1;
		e++;
	}
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",i,a,b,c,d,e);
    return 0;
}
