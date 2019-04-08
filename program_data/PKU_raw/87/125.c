int main(){
	int a,b,c,d,e,f,zs;
	while(a!=0){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0){return 0;}
		d+=12;
		if((e>=b)&&(f>=c)){
			zs=(d-a)*3600+(e-b)*60+(f-c);
		}else if((e>=b)&&(f<c)){
			zs=(d-a)*3600+(e-b-1)*60+(f-c+60);
		}else if((e<b)&&(f>=c)){
			zs=(d-a-1)*3600+(e-b+60)*60+(f-c);
		}else if((e<b)&&(f<c)){
			zs=(d-a-1)*3600+(e-b+59)*60+(f-c+60);
		}
		printf("%d\n",zs);
	}
	return 0;
}