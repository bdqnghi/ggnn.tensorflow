int main(){
	struct point{
		char a[100];
		double b;
	}points[100];
	int n,i=0,k=1;
	char p[100];
	double d;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%lf",points[i].a,&points[i].b);
	}
	for(k=1;k<=n;k++){
		for(i=0;i<n-k;i++){
			if(points[i].b>points[i+1].b){
				d=points[i+1].b;
				points[i+1].b=points[i].b;
				points[i].b=d;
				strcpy(p,points[i+1].a);
				strcpy(points[i+1].a,points[i].a);
				strcpy(points[i].a,p);
			}
		}
	}
	for(i=0;i<n;i++){
		if(strcmp(points[i].a,"male")==0){
			printf("%.2lf",points[i].b);
			break;
		}
	}

	for(i=i+1;i<n;i++){
		if(strcmp(points[i].a,"male")==0){
             printf(" %.2lf",points[i].b);
		}
	}
	for(i=n-1;i>=0;i--){
		if(strcmp(points[i].a,"female")==0){
			printf(" %.2lf",points[i].b);
		}
	}




	


	
	 return 0;
}