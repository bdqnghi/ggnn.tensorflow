int main(){
	int n;
	int i;
	double e;
	double k;
	double f;
	double a;
	double GPA;
	int sz[10];
	int xb[10];
	scanf("%d",&n);
	k=0;
	e=0;
	a=0;
	f=0;
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
        scanf("%d",&xb[i]);
	}
	for(i=0;i<n;i++){
		k=k+sz[i];
	}
	for(i=0;i<n;i++){
		if(xb[i]>=90){
			e=4.0;
		}else if(xb[i]>=85&&xb[i]<90){
			e=3.7;
		}else if(xb[i]>=82&&xb[i]<85){
			e=3.3;
		}else if(xb[i]>=78&&xb[i]<82){
			e=3.0;
		}else if(xb[i]>=75&&xb[i]<78){
			e=2.7;
		}else if(xb[i]>=72&&xb[i]<75){
			e=2.3;
		}else if(xb[i]>=68&&xb[i]<72){
			e=2.0;
		}else if(xb[i]>=64&&xb[i]<68){
			e=1.5;
		}else if(xb[i]>=60&&xb[i]<64){
			e=1.0;
		}else{
			e=0;
		}
	    f=e*sz[i];
		a+=f;
	}
	GPA=a/k;
	printf("%.2f",GPA);
         return 0;
}