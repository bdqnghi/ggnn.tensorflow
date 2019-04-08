int main(){
	int a,b,c,d,e,f;
	int r1,r2,r3;
	for(;;){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0){
			return 0;
		}
		else{
			r1=12+d-a;
			r1=60*60*r1;
			r2=60*b+c-(60*e+f);
			r3=r1-r2;
			printf("%d\n",r3);
			r3=0;
		}
	}
return 0;
}