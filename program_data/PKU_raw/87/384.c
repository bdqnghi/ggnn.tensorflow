int main(){
	int a,b,c,d,e,f,s,i;
	for(i=1;i<=M;i++){
	scanf("%d%d%d%d%d%d\n",&a,&b,&c,&d,&e,&f);	
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
		break;
	}else{
	s=(d+12-a)*3600+(e-b)*60+(f-c);
	}
	printf("%d\n",s);
	}
	return 0;
}