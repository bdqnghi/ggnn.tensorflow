int main(){
    double male[40]={0};
    double female[40]={0};
    char sex[10];
	int i,j,n;
	int m=0,f=0;
	double h,t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%lf",sex,&h);
		if(sex[0]=='m'){
           male[m]=h;
           m++;
        }else{
           female[f]=h;
           f++;
        }
	}
	for(i=1;i<=m;i++){
		for(j=0;j<m-i;j++){
			if(male[j]>male[j+1]){
				t=male[j];
				male[j]=male[j+1];
				male[j+1]=t;
			}
		}
    }
	for(i=1;i<=f;i++){
		for(j=0;j<f-i;j++){
			if(female[j]>female[j+1]){
				t=female[j];
				female[j]=female[j+1];
				female[j+1]=t;
			}
		}
	}
	printf("%.2lf",male[0]);
	for(i=1;i<m;i++){
		printf(" %.2lf",male[i]);
	}for(i=f-1;i>=0;i--){
		printf(" %.2lf",female[i]);
	}
   
   return 0;
}