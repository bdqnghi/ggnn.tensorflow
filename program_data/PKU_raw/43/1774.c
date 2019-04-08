int main()
{
	int m,i,j,k,judge;
	scanf("%d",&m);
	for (i=3;i*2<=m;i+=2){
		judge=1;
		for (k=3;k*3<=i;k+=2){
			if (i%k==0) {judge=0;}
		}
		if (judge){
			j=m-i;
			for (k=3;k*3<=j;k+=2){
	     		if (j%k==0) {judge=0;}
			}
		}
		if (judge) printf("%d %d\n",i,j);
	}
	return 0;
}