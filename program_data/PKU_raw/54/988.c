

int apple(double n,double k){
	double m;
	int x=1,i;
	while(1){
		m=x*n+k;
		for(i=1;i<n;i++){
			m=m*n/(n-1)+k;
		}
		int e=(int)m;
		if(m-e==0){
			return e;
		}else{
			x++;
		}
	}
}
int main(int argc, char* argv[])
{
	double n,k;
	int num;
	int x=1;
	scanf("%lf%lf",&n,&k);
	num=apple(n,k);
	printf("%d",num);
	return 0;
}
