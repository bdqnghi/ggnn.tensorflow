int time(int a,int b,int c);
int main(){
	int a,b,c,d,e,f,mor,aft,second;
	while(1){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			break;
		}
		d+=12;
		mor=time(a,b,c);
		aft=time(d,e,f);
		second=aft-mor;
		printf("%d\n",second);
	}
	return 0;
}
int time(int a,int b,int c){
	int second;
	second=0;
	second+=3600*a;
	second+=60*b;
	second+=c;
	return second;
}