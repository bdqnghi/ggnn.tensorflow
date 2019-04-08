int main(int argc, char* argv[])
{
	int n,i,a,t,b[20],sum=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(a==0)
			printf("60\n");
		else{
			for(t=1;t<=a;t++){
				scanf("%d",&b[t]);
				sum=b[t]+3*t;
				if(sum<=60&&t==a)
					printf("%d\n",60-3*a);
				else if(sum>60&&sum-3<=60)
					printf("%d\n",b[t]);
				else if(sum-3>60&&b[t-1]+3*(t-1)<60)
					printf("%d\n",63-3*t);}}}
	return 0;
}