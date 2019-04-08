
int main(){
	int n,i=0,j=0;
	char sex[41][7];
	double height[41],male[41]={0},female[41]={0},ex;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",sex[i]);
		scanf("%lf",&height[i]);
	}
	for(i=0;i<n;i++){
		if(sex[i][0]=='m'){
			male[i]=height[i];
		}else{
			female[i]=height[i];
		}
	}
	for(i=0;i<41;i++){
		for(j=0;j<40;j++){
			if(male[j]>male[j+1]){
				ex=male[j];
				male[j]=male[j+1];
				male[j+1]=ex;
			}
		}
	}
	for(i=0;i<41;i++){
		for(j=0;j<40;j++){
			if(female[j]<female[j+1]){
				ex=female[j];
				female[j]=female[j+1];
				female[j+1]=ex;
			}
		}
	}
	for(i=0;i<41;i++){
		if(male[i]!=0){
			printf("%.2lf ",male[i]);
		}
	}
	printf("%.2lf",female[0]);
	for(i=1;female[i]!=0;i++){
		printf(" %.2lf",female[i]);
	}
	return 0;

}