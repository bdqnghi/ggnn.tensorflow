int main(){
	int i,qian;
	int yu[6]={0};
	int zhang[6]={0};
	scanf("%d",&qian);
	zhang[0]=qian/100;
	yu[0]=qian-zhang[0]*100;
	zhang[1]=yu[0]/50;
	yu[1]=yu[0]-zhang[1]*50;
	zhang[2]=yu[1]/20;
	yu[2]=yu[1]-zhang[2]*20;
	zhang[3]=yu[2]/10;
	yu[3]=yu[2]%10;
	zhang[4]=yu[3]/5;
	yu[4]=yu[3]%5;
	zhang[5]=yu[4];
	for(i=0;i<6;i++){
		printf("%d\n",zhang[i]);
	}
	return 0;
}