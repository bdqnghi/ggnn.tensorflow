int main(){
	int a,b,c,d,e,f,sec;
	do{
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	if(a==0&&b==0&&c==0&&d==0&&e==0){
		break;
	}
	if(d<12){
		d+=12;
	}
	sec=(d-a-1)*3600+e*60+f+3600-b*60-c;
	printf("%d\n",sec);
	}while(1);
	scanf("%d",&a);
	return 0;
}