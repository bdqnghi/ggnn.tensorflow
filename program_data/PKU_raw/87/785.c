int main() {
	int a,b,c,d,e,f,h,m,s,t;
	scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f);
	while(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
	h=11+d-a;
	m=e+59-b;
	s=f+60-c;
	t=3600*h+60*m+s;
    printf("%d\n",t);
	scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f);
	}
	return 0;
}