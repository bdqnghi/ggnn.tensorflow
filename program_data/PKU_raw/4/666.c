int main()
{
	int i,j,b,c,d,e,f,g,y,h,k,m,n,t,a,x[500][500];
	scanf("%d%d",&a,&b);
	y=0;
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			scanf("%d",&x[i][j]);
		}
	}
	for(t=2;t<=a+b;t++){

	for(k=1;k<t;k++){
		if(t-k<=b&&k<=a){
		printf("%d\n",x[k][t-k]);
		}
		
	}
	}
		return 0;
}
