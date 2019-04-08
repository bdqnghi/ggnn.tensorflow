int main(){
	int s;
	scanf("%d",&s);
	int a,b,c,d,e;
	a=s%10;
	b=(s%100)/10;
	c=(s%1000)/100;
	d=(s%10000)/1000;
	e=(s%100000)/10000;
	if(a!=0){
		printf("%d",a);
	}
	if(b!=0){
		printf("%d",b);
	}
	if(c!=0){
		printf("%d",c);
	}
	if(d!=0){
	    printf("%d",d);
	}
	if(e!=0){
		printf("%d",e);
	}
	return 0;
}
