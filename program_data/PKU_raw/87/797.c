int main(){
	int a,b,c,d,e,f;
	int x;
	while(a!=0){
		x=0;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(a==0)
		break;
	x=12*3600+(d-a)*3600+(e-b)*60+f-c;
	printf("%d\n",x);}
	return 0;	
}
