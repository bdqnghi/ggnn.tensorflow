int main()
{
	int a,b,c,d,e,n,m;
	scanf("%d",&n);
	a=(int)(n/10000);
	b=(int)((n-a*10000)/1000);
	c=(int)((n-a*10000-b*1000)/100);
	d=(int)((n-a*10000-b*1000-c*100)/10);
	e=n-a*10000-b*1000-c*100-d*10;
	if(a!=0){
		m=e*10000+d*1000+c*100+b*10+a;}
	else if(a=0&&b!=0){
		m=e*1000+d*100+c*10+b;}
	else if(a==0&&b==0&&c!=0){
		m=e*100+d*10+c;}
	else if(a==0&&b==0&&c==0&&d!=0){
		m=e*10+d;}
	else if(a==0&&b==0&&c==0&&d==0&&e!=0){
		m=e;}
	printf("%d",m);
	return 0;
}