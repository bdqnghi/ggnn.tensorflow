int main(){
	int n,i;
	double l,d,b,s[1000][2];
    scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf %lf",&s[i][0],&s[i][1]);
	}
	d=s[0][1]/s[0][0];
	for(i=1;i<n;i++){
		l=s[i][1]/s[i][0];
		b=d-l;
		if(b>0.05){
			printf("worse\n");
		}
		if(b<-0.05){
			printf("better\n");
		}
		if((-0.05<=b)&&(b<=0.05)){
			printf("same\n");
		}
	}
	return 0;
}
		