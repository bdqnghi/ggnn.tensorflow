int main(){
	int a,b,c,d,e,f,t;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	while(a||b||c||d||e||f){
		t=(d+12)*3600+e*60+f-(a*3600+b*60+c);
		printf("%d\n",t);
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	}
	return 0;
}
