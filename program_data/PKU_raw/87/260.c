int main(){
	int a,b,c,d,e,f,k,i;
	for(i=1;i<=100;i++){
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
		break;
	}
	if((f-c)<0){
		e=e-1;
		f+=60;
	}
	if((e-b)<0){
		d-=1;
		e+=60;
	}
	k=f-c+60*(e-b)+3600*(12+d-a);
	printf("%d\n",k);
	}
	return 0;
}