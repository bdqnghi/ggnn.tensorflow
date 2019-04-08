int main(){
	int n;
	int a,b,c,d,e,f;
	for(n=0;n<100;n++){
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
		return 0;
	}else{
	d+=12;
	int s;
	s=(d-a)*60*60+(e-b)*60+(f-c);
	printf("%d\n",s);
	}
	}

	return 0;
}