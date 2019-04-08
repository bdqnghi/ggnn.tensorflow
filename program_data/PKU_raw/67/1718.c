int main(){
	int n,i;
	double f;
	struct ZL{
		int a,b;
	}*s;
	scanf("%d",&n);
	s=(struct ZL*)malloc(sizeof(struct ZL)*n);
	for(i=0;i<n;i++){
		scanf("%d%d",&s[i].a,&s[i].b);
	}
	f=(double)s[0].b/s[0].a;
	for(i=1;i<n;i++){
		if((double)s[i].b/s[i].a-f>0.05){printf("better\n");}
		else if(f-(double)s[i].b/s[i].a>0.05){printf("worse\n");}
		else{printf("same\n");}
	}
	free(s);
	return 0;
}