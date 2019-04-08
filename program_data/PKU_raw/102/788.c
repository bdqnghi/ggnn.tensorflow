double male[40];
double female[40];
int mk,fk;
void sor1(){
	int i,j,tmp;
	double min;
	for(i=0;i<mk;i++){
		min=male[i];
		tmp=i;
		for(j=i+1;j<mk;j++){
			if(min>male[j]){
				min=male[j];
				tmp=j;
			}
		}
		male[tmp]=male[i];
		male[i]=min;
	}
	
}
void sor2(){
	int i,j,tmp;
	double min;

	for(i=0;i<fk;i++){
		min=female[i];
		tmp=i;
		for(j=i+1;j<fk;j++){
			if(min>female[j]){
				min=female[j];
				tmp=j;
			}
		}
		female[tmp]=female[i];
		female[i]=min;
	}
	
}

int main(void){
	int n,i;
	char sex[10];

	scanf("%d",&n);
	mk=0;
	fk=0;
	for(i=0;i<n;i++){
		scanf("%s",sex);
		if(sex[0]=='m')
			scanf("%lf",&male[mk++]);
		else
			scanf("%lf",&female[fk++]);
	}
	sor1();
	sor2();
	for(i=0;i<mk;i++)
		printf("%.2f ",male[i]);
	for(i=fk-1;i>0;i--)
		printf("%.2f ",female[i]);
	printf("%.2f\n",female[0]);
}