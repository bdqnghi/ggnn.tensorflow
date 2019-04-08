 
main(){
	int n;
	scanf("%d",&n);
	struct{
		double x,y;
	}top[100];
	int i;
	for(i=0;i<n;i++){
		double x1,y1;
		scanf("%lf%lf",&x1,&y1);

		top[i].x=x1;
		top[i].y=y1;
	}
	int m=0;
	int j,r;
	
	double score[500];
	for(j=0;j<n;j++){
		for(r=j+1;r<n;r++){
			score[m]=(top[j].x-top[r].x)*(top[j].x-top[r].x)+
	
				(top[j].y-top[r].y)*(top[j].y-top[r].y);
			m++;
		}
	}
	int a,b;
	for(b=m-1;b>0;b--){
		for(a=0;a<b;a++)
		if(score[a]<score[a+1]){
			double tmp;
			tmp=score[a+1];
			score[a+1]=score[a];
			score[a]=tmp;
		}
	}
	double c=sqrt(score[0]);
	printf("%.4f\n",c);
	return 0;
}
 
