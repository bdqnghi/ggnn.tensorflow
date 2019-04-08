int main(){
	int n,lc,yx,i;
	float x,y;
	scanf("%d",&n);
	scanf("%d%d",&lc,&yx);
		x=1.0*yx/lc;
	for(i=0;i<n-1;i++)
	{
		lc=0;
		yx=0;
		y=0;
		scanf("%d%d",&lc,&yx);
		y=1.0*yx/lc;
		if((y-x)>0.05){
			printf("better\n");}
		else if((x-y)>0.05){
			printf("worse\n");}
		else if((y-x)<=0.05&&(x-y)<=0.05){
			printf("same\n");}
		
	}
	return 0;
}