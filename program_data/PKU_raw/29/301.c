
	int fblq(int n){
if(n==0)
return 1;
if(n==1)
return 2;
return fblq(n-1)+fblq(n-2);
}
int main(){
	int k,m;
	double sum=0;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
	scanf("%d",&m);
	sum=0;
	for(int j=1;j<=m;j++){
		sum+=fblq(j)*1.0/fblq(j-1);
	}
	printf("%.3lf\n",sum);
	}
	return 0;
}