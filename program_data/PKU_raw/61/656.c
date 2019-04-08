int bo(int x);
int main(){
	int m;
	scanf("%d",&m);
	int i;
	for(i=0;i<m;i++){
		int n,c;
		scanf("%d",&n);
		c=bo(n);
		printf("%d\n",c);
	}
return 0;
}
int bo(int x){
	double b,p,q,P,Q,result;
	b=sqrt(5);
	p=(1+b)/2;
	q=(1-b)/2;
	P=pow(p,x);
	Q=pow(q,x);
	result=(P-Q)/b;
	return result;
}



