int main(){
	int n,i,a,b,aw=0,bw=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d %d",&a,&b);
		if(a==0&&b==1){aw++;}
		if(a==1&&b==2){aw++;}
		if(a==2&&b==0){aw++;}
		if(a==1&&b==0){bw++;}
		if(a==2&&b==1){bw++;}
		if(a==0&&b==2){bw++;}}
	if(aw>bw){printf("A");}
	else if(aw<bw){printf("B");}
	else{printf("Tie");}
	return 0;
}