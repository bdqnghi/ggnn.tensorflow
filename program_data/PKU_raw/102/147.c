
struct info{
	double height;
	char sex[10];
}p[41];
double pm[41],pf[41];

int comp_m(const void *a,const void *b){
	return (*((double*)a)-*((double*)b))>0?1:(*((double*)a)-*((double*)b)<0?-1:0);
}

int comp_f(const void *a,const void *b){
	return (*((double*)b)-*((double*)a))>0?1:(*((double*)b)-*((double*)a)<0?-1:0);
}

int main(){
	int n;
	int i;
	int index_m,index_f;
	while(cin>>n){
		index_m=0;
		index_f=0;
		for(i=0;i<n;i++){
			cin>>p[i].sex>>p[i].height;
			if(!strcmp(p[i].sex,"male")){
				pm[index_m++]=p[i].height;
			}
			else{
				pf[index_f++]=p[i].height;
			}
		}
		qsort(pm,index_m,sizeof(double),comp_m);
		qsort(pf,index_f,sizeof(double),comp_f);
		for(i=0;i<index_m;i++){
			printf("%.2f ",pm[i]);
		}
		for(i=0;i<index_f-1;i++){
			printf("%.2f ",pf[i]);
		}
		printf("%.2f",pf[i]);
	}
	return 0;
}