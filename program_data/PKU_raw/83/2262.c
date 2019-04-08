int main(){
	int n,i=0,j=0;
	int sz[2][10];
	double a[10];
	int sum1=0;
	double sum2=0,gpa=0;
	scanf("%d",&n);
	for(i=0;i<2;i++){
		for(j=0;j<n;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(j=0;j<n;j++){
		sum1+=sz[0][j];
	}
	for(j=0;j<n;j++){
		if(sz[1][j]>=90&&sz[1][j]<=100){
			a[j]=4.0;
		}else if(sz[1][j]>=85&&sz[1][j]<=89){
			a[j]=3.7;
		}else if(sz[1][j]>=82&&sz[1][j]<=84){
			a[j]=3.3;
		}else if(sz[1][j]>=78&&sz[1][j]<=81){
			a[j]=3.0;
		}else if(sz[1][j]>=75&&sz[1][j]<=77){
			a[j]=2.7;
		}else if(sz[1][j]>=72&&sz[1][j]<=74){
			a[j]=2.3;
		}else if(sz[1][j]>=68&&sz[1][j]<=71){
			a[j]=2.0;
		}else if(sz[1][j]>=64&&sz[1][j]<=67){
			a[j]=1.5;
		}else if(sz[1][j]>=60&&sz[1][j]<=63){
			a[j]=1.0;
			
		}else{
			a[j]=0;
		}
	}
	for(j=0;j<n;j++){
		sum2+=(double)sz[0][j]*a[j];
	}
	gpa=(double)sum2/sum1;
	printf("%.2f",gpa);
	return 0;
}









		


