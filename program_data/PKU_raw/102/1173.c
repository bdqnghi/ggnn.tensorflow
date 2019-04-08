int main(){
int n,i,j1=0,j2=0;
double sz[40];
double male[40],female[40],tmp;
char sex[40][10];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s%lf",&sex[i],&sz[i]);
}
for(i=0;i<n;i++){if(sex[i][0]=='f'){female[j1]=sz[i];j1++;}else{male[j2]=sz[i];j2++;}}
for(i=0;i<j2-1;i++){
	if(male[i]>male[i+1]){
		tmp=male[i];
		male[i]=male[i+1];
		male[i+1]=tmp;
		if(i!=0){i=i-2;}
	}
}
for(i=0;i<j1-1;i++){
	if(female[i]<female[i+1]){
		tmp=female[i];
		female[i]=female[i+1];
		female[i+1]=tmp;
		if(i!=0){i=i-2;}
	}
}
for(i=0;i<j2;i++){printf("%.2lf ",male[i]);}
for(i=0;i<j1-1;i++){printf("%.2lf ",female[i]);}
printf("%.2lf",female[j1-1]);
return 0;
}