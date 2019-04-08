int main(){
	int xf[10]={0};
	float sz[10]={0};
	int i, e, n;
	float c=0;
	float GPA=0;
	e=0;
	
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d",&xf[i]);
		e+=xf[i];
	}
	for(i=0;i<=n-1;i++){
		scanf("%f",&sz[i]);
		if(sz[i]>=90){
			sz[i]=4.0;
		}else if(sz[i]>=85){
			sz[i]=3.7;
		}else if(sz[i]>=82){
			sz[i]=3.3;
		}else if(sz[i]>=78){
			sz[i]=3.0;
		}else if(sz[i]>=75){
			sz[i]=2.7;
		}else if(sz[i]>=72){
			sz[i]=2.3;
		}else if(sz[i]>=68){
			sz[i]=2.0;
		}else if(sz[i]>=64){
			sz[i]=1.5;
		}else if(sz[i]>=60){
			sz[i]=1.0;
		}else{
			sz[i]=0;
		}
	}
		for(i=0;i<=n-1;i++){
			c+=sz[i]*xf[i];
		}
		GPA=c*1.0/e;
printf("%.2f",GPA);
return 0;
}
