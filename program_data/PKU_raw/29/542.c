
int main()
{
	int r,c,k,i,j,n,e,a,b;
	double shu[100];
	               
	int sz[100][100];
	for(n=0;n<100;n++){
		shu[n]=0.0;
	}     
	scanf("%d",&k);
	for(n=0;n<k;n++){
		scanf("%d",&r);
		for(i=0;i<r;i++){
			if(i==0){
				a=2;
				b=1;
			}
			else{
				e=a;
				a=a+b;
				b=e;
			}
			shu[n]+=1.0*a/b;
			
		}
		printf("%.3lf\n",shu[n]);
	}

	
	return 0;
}






