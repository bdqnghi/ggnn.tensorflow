int main(){
	int a,b,c,d,e,f,s1,s2,s;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	while(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
			s1=s2=s=0;
			a*=3600;
			b*=60;
			s1=a+b+c;
			d=(d+12)*3600;
			e*=60;
			s2=d+e+f;
			s=s2-s1;
			printf("%d\n",s);
			scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	}
	return 0;
}