int main(){
	int a,b,c,d,e,f,i,r;
    for(i=0;i>=0;i++){
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    if(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
		d=d+12;
		r=(d-a-1)*3600+(3600-b*60-c)+e*60+f;
		printf("%d\n",r);
	}else{
		return 0;
	}}
	return 0;
}
