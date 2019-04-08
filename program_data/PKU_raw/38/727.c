int main(){
int k;
scanf("%d",&k);
int n[1000];
int i,j;
double shu[100];
double sum;
double aver[1000],res[1000];
for(i=0;i<k;i++){
	scanf("%d",&n[i]);
	sum=0;
	for(j=0;j<n[i];j++){
		scanf("%lf",&shu[j]);
	}
	for(j=0;j<n[i];j++){
        sum+=shu[j];
	}
	aver[i]=sum/n[i];
	res[i]=0;
	for(j=0;j<n[i];j++){
	    res[i]+=(shu[j]-aver[i])*(shu[j]-aver[i]);
	}
	res[i]=res[i]/n[i];
	res[i]=sqrt(res[i]);
}
for(i=0;i<k;i++){
	printf("%.5lf\n",res[i]);
}
return 0;
}
