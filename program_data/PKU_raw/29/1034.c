double f(int n){
	double a=1,b=2,c;
	int i=1;
	double d=2.000;
	if(n==1)
		return d;
    while(i<n){
		c=a+b;
		a=b;b=c;
		d+=c/a;
		i++;
	}
	return d;
}
int main(){
	int m,i,sz[100];
	double s;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&(sz[i]));
	}
    for(i=0;i<m;i++){
		printf("%.3lf\n",f(sz[i]));
	}
	return 0;
}

