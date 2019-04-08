int main(){
	int n;
	scanf("%d",&n);
	struct qujian {
		int a,b;
	}qujian[50001];
	int i;
	for(i=0;i<n;i++){
		scanf("%d %d",&(qujian[i].a),&(qujian[i].b));
	}
	int max,min;
	min=qujian[0].a;
	max=qujian[0].b;
	for(i=0;i<n;i++){
		if(min>qujian[i].a){
			min=qujian[i].a;
		}
		if(max<qujian[i].b){
			max=qujian[i].b;
		}
	}
	int m;
	double s;

	for(s=1.0*min;s<=max;s=s+0.5){
		for(i=0;i<n+1;i++){
			if(i==n){
				m=0;
				break;
			}
			if(s<=qujian[i].b&&s>=qujian[i].a){
				break;
				m=1;
			}
		}
		if(m==0){
			printf("no");
			break;
		}
		if(s==max){
			printf("%d %d",min,max);
		}
	}
	return 0;
}
