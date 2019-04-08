int main()
{
	int a,b;
	int i,j,k;
	int x[300]={0},y[300]={0};
	for(;;){
		scanf("%d%d",&a,&b);
		if(a==0)
			break;
		else{
			int n=a;
			for(i=0;i<n;i++){
				x[i]=i+1;
			}
			do{
				j=b%n;
				for(i=0;i<n-1;i++){
					y[i]=x[(j+i)%n];
				}
				for(i=0;i<n-1;i++){
					x[i]=y[i];
				}
				n=n-1;
			}
			while(n>1);
			printf("%d\n",x[0]);
		}
	}
	return 0;
}