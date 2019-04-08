int main(){
	int a,b,c,d,e,f;
	int i=1;
	scanf("%d",&a);
	scanf("%d%d",&b,&c);
	d=(b>=c)?b:c;
	e=(b<=c)?b:c;
	for(i=3;i<=a;i++){
		scanf("%d",&f);
		if(d<=f){
			e=d;
			d=f;
		}
		else{
			e=(e>=f)?e:f;
		}
	}
	printf("%d\n%d",d,e);
	return 0;
}