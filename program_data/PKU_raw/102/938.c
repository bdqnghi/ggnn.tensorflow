
int main(){
	struct person{ 
		char sex[6];
		double height;
	}person[40];
	int n,i,j,mk=0,fk=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%lf",person[i].sex,&(person[i].height));
	}
	double male[40],female[40];
	for(i=0;i<n;i++){
		if(strcmp(person[i].sex,"male")==0){
			male[mk]=person[i].height;
			mk++;
		}
	}
	for(i=0;i<n;i++){
		if(strcmp(person[i].sex,"female")==0){
			female[fk]=person[i].height;
			fk++;
		}
	}
	for(i=0;i<mk;i++){
		for(j=mk-1;j>0;j--){
			if(male[j-1]>male[j]){
				double p;
				p=male[j];
				male[j]=male[j-1];
				male[j-1]=p;
			}
		}
	}
	for(i=0;i<fk;i++){
		for(j=fk-1;j>0;j--){
			if(female[j-1]<female[j]){
				double p;
				p=female[j];
				female[j]=female[j-1];
				female[j-1]=p;
			}
		}
	}
	for(i=0;i<mk;i++){
		if(i==0){
			printf("%.2lf",male[i]);
		}else{
			printf(" %.2lf",male[i]);
		}
	}
	for(i=0;i<fk;i++){
		printf(" %.2lf",female[i]);
	}
	return 0;
}