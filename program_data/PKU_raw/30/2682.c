int main()
{
	int a,b,c,e=0,n;
	scanf("%d",&n);
	a=0;
	for(int d=1;d<=n;d++){
		b=d%10;
		c=(d-b)/10;
		if(d%7==0 || b==7 || c==7){
			e=0;
		}else{
			e=d*d;
		}
		a=a+e;
	}
	printf("%d",a);
	return 0;
}