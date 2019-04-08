int main()
{
	int i,t,m,a,b,n;
	scanf("%d",&n);
	scanf("%d",&m);
	i=2;
a=m;
scanf("%d",&m);
b=m;
	while(i<n){
	scanf("%d",&m);
	if(a>=b){
		if(m>=a){
			b=a;
	a=m;
	}
		if(m<=b){
		a=a;
		b=b;}
		if(m<a&&m>b){
		a=a;
		b=m;}
		}else{
			if(m>=b){
		b=b;
		a=m;}
			if(m<b&&m>a){     
		a=b;
		b=m;}
			if(m<=a){
		t=b;
		b=a;
		a=t;}}
		i++;
	}
	printf("%d\n%d\n",a,b);
	return 0;
}