int main(){
	int a,b,c,d,e,f,w;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	w=(d+12-a-1)*3600+e*60+f+3600-b*60-c;
    printf("%d\n",w);
	while(a!=0){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a!=0){
	w=(d+12-a-1)*3600+e*60+f+3600-b*60-c;
    printf("%d\n",w);
		}
		else
			break;
	}
	return 0;
}