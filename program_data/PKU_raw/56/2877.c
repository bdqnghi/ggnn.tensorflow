int main(){
    int n,a,b,c,d,e,m;
	scanf("%d",&n);
	a=(int)(n/10000);
	n=n-10000*a;
	b=(int)(n/1000);
	n=n-1000*b;
	c=(int)(n/100);
	n=n-100*c;
	d=(int)(n/10);
	e=n-10*d;
    if(a==0){
		if(b!=0){
		m=e*1000+d*100+c*10+b;}
		else{
			if(c!=0){
			m=e*100+d*10+c;}
			else{
				if(d!=0){
				m=e*10+d;}
				else{
				   m=e;
				}
			}
		}
	}
	else{m=e*10000+d*1000+c*100+b*10+a;}
	printf("%d",m);
	 return 0;
}