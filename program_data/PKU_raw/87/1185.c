int main(){
	int a,b,c,d,e,f,sum;
	while(1){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if (a==0)
			break;
		d=d+11;
		e=e+59;
		f=f+60;
		sum=(d-a)*3600+(e-b)*60+(f-c);
		printf("%d\n",sum);

	}
	return 0;
}