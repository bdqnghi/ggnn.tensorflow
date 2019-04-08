int main(){
	int n=0,i,s=0;
	scanf("%d",&n);
	struct qujian{
		int x,y;
	}e,qujians[50000];
	for(i=0;i<n;i++){
		scanf("%d%d",&qujians[i].x,&qujians[i].y);
	}
	int k;
	for(k=1;k<=n;k++){
		for(i=0;i<n-k;i++){
			if(qujians[i].x>qujians[i+1].x){
				e=qujians[i+1];
				qujians[i+1]=qujians[i];
				qujians[i]=e;
			}
		}
	}
    int p=qujians[0].x;
	for(i=0;i<n;i++){
		if(qujians[i].x<p){
			p=qujians[i].x;
		}
	}
	for(i=0;i<n;i++){
		if(qujians[i+1].x>qujians[i].y){
			s=1;
			break;
		}else{
			qujians[i+1].x=qujians[i].x;
			if(qujians[i].y>qujians[i+1].y){
				qujians[i+1].y=qujians[i].y;
			}else{
				qujians[i+1].y=qujians[i+1].y;
			}
		}
	}
		
		
	
	int m=qujians[0].y;
	for(i=0;i<n;i++){
		if(qujians[i].y>m){
			m=qujians[i].y;
		}
	}

	if(s==1){
		printf("no");
	}else{
		printf("%d %d",p,m);
	}
	return 0;

}
