
struct stu{
	long int num[100000];
	int y[100000];
	int m[100000];
};

int main()
{
	int n,i,temp=0,sum[100000];
	struct stu p;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%ld %d %d",&p.num[i],&p.y[i],&p.m[i]);
		sum[i]=p.m[i]+p.y[i];
	}
	for(i=0;i<n-1;i++){
		if(sum[i]>=sum[i+1]){
			temp=sum[i+1];
			sum[i+1]=sum[i];
			sum[i]=temp;
			temp=p.num[i+1];
			p.num[i+1]=p.num[i];
			p.num[i]=temp;
		}
	}
	printf("%ld %d\n",p.num[n-1],sum[n-1]);
	for(i=0;i<n-2;i++){
		if(sum[i]>=sum[i+1]){
			temp=sum[i+1];
			sum[i+1]=sum[i];
			sum[i]=temp;
			temp=p.num[i+1];
			p.num[i+1]=p.num[i];
			p.num[i]=temp;
		}
	}
	printf("%ld %d\n",p.num[n-2],sum[n-2]);
	for(i=0;i<n-3;i++){
		if(sum[i]>=sum[i+1]){
			temp=sum[i+1];
			sum[i+1]=sum[i];
			sum[i]=temp;
			temp=p.num[i+1];
			p.num[i+1]=p.num[i];
			p.num[i]=temp;
		}
	}
	printf("%ld %d\n",p.num[n-3],sum[n-3]);
	return 0;
}
