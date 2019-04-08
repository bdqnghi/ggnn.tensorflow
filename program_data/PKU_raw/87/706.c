int main(){
	int a,b,c,d,e,f;
	int s;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	while(a!=0){ 
s=0;
		d+=12;
		s+=(d-a)*3600+(e-b)*60+(f-c)*1;
		printf("%d\n",s);
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

	}
	return 0;
}
