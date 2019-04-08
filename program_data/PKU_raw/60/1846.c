int main()
{
	int N,a,b,i,j,m,n;
	scanf("%d",&N);
	if(N<=4)
		printf("empty\n");
	for(a=3;a<=N-2;a=a+2){
        i=1;
		for(b=2;b<=a/2;b++){
			if(a%b==0){
				i=0;
				break;
			}
		}
			if(i==1){
				m=a+2;
				j=1;
				for(n=2;n<=m/2;n++){
					if(m%n==0){
						j=0;
						break;
					}
				}
			}
			if(i==1&&j==1)
			printf("%d %d\n",a,m);
			}
	
}