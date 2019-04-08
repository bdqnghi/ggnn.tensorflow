int main(){
	int a,b,c,d,e,f;
	int hour,min1,min2,sec1,sec2,result;

	while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)){
	if(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
		min1=59-b;
		sec1=60-c;
		min2=e;
		sec2=f;
		hour=12+d-(a+1);

		result=hour*60*60+min1*60+min2*60+sec1+sec2;
		printf("%d\n",result);
	}
	else 
		break;
	}
	return 0;

}