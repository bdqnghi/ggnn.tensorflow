int main(){
	int n,zy,yy,zq,yq,i;
	float x,y;
	scanf("%d",&n);
	scanf("%d%d",&zy,&yy);
	x=1.0*yy/zy;
	for(i=0;i<n-2;i++){
		scanf("%d%d",&zq,&yq);
		y=1.0*yq/zq;
		if(y-x>0.05){
			printf("better\n");
		}
		else if(y-x<-0.05){
			printf("worse\n");
		}
		else{
			printf("same\n");
		}
	}
	scanf("%d%d",&zq,&yq);
	y=1.0*yq/zq;
	if(y-x>0.05){
		printf("better");
	}
	else if(y-x<-0.05){
		printf("worse");
	}
	else if(y-x>=-0.05 && y-x<=0.05){
		printf("same");}

	return 0;
}