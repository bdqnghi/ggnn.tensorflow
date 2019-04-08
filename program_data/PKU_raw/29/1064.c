double qh(int n);
int main(){
	int m,k;
	int x[10000];
	scanf("%d",&m);
	for(k=0;k<m;k++){
		scanf("%d",&x[k]);
	}
	int *ptr;
	for(k=0;k<m;k++){
		ptr=&x[k];
		printf("%.3lf\n",qh(*ptr));
	}
	return 0;
}
double qh(int n){
	int i;
	double f1=1.0,f2=2.0;
	double cur=f2/f1,e;
	for(i=2;i<=n;i++){
		e=f2;
		f2=f1+f2;
		f1=e;
		cur+=f2/f1;
	}
	return cur;
}


