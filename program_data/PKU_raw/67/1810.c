int main(){
	int n,s,t,a,b,i;
    scanf("%d",&n);
	scanf("%d%d",&s,&t);
	for(i=0;i<n-1;i++){
		scanf("%d%d",&a,&b);
		if(1.0*b/a-1.0*t/s>0.05){printf("better\n");}
        else if(1.0*b/a-1.0*t/s<-0.05){printf("worse\n");}
		else{printf("same\n");}
	}
	return 0;
}