
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int j;
	for(i=0;i<n;i++){
		double sum=0;
		double ave;
		int num;
		scanf("%d",&num);
		double s[101];
		double *p;
		p=s;
		for(j=0;j<num;j++,p++){
			scanf("%lf",p);
			sum+=*p;
		}

		ave=sum/num;
		p=s;
		double total=0;
		for(j=0;j<num;j++,p++){
			total+=(*p-ave)*(*p-ave);
		}
		double result;
		result=sqrt(total/num);
		printf("%.5lf\n",result);
	}
	return 0;
}
