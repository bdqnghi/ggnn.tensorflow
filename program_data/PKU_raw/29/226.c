int main()
{
	int n,i,num;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num);
		int j,a=1,b=2,c=3;
		double sum=0,shu;
		for(j=1;j<=num;j++){
			if(j==1) shu=(double)b/a;
			if(j==2) shu=(double)c/b;
			if(j>2){
				a=c+b,b=c,c=a;
				shu=(double)c/b;
			}
			sum+=shu;
		}
		printf("%0.3lf\n",sum);
	}
	return 0;
}
