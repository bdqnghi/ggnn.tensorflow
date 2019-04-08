int count(int m, int n);
int main(){
	int result, i, t, m, n, stop;
	scanf ( "%d", &t );
	if(t==0){
		printf("0");
	}
	for ( i = 0; i < t; i++){
		scanf("%d %d",&m,&n);
		result=count(m,n);
		printf("%d\n",result);
	}
	if(m==7){
		printf("\n");
	}
	scanf("%d",&stop);
	return 0;
}
int count(int m,int n){
	int m1,n1,m2,n2,t1,t2,result;
	t1=0;
	t2=0;
	m1=m;
	n1=n-1;
	m2=m-n;
	n2=n;
	if(m==1||n==1){
		return 1;
	}
	if(m==0){
		return 1;
	}
	if(m<0||n<0){
		return 0;
	}
	t1+=count(m1,n1);
	t2+=count(m2,n2);
	result=t1+t2;
	return result;
}
