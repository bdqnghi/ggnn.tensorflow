int main(){
	int a,b,c,d,e,f,x;
	while(1){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0){
			break;
		}else{
				x=(59-b)*60+60-c+(d-a-1+12)*3600+e*60+f;
			printf("%d\n",x);
		}
	}

	return 0;
}