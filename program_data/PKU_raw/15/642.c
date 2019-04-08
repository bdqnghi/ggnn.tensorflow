int main()
{	int cancer[100][100];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&cancer[i][j]);
		}
	}
	int a,b,c,d,m,x;
	for(m=0;m<n;m++){
		for(x=0;x<n;x++){
			if(cancer[m][x]==0){
				if((cancer[m-1][x]==255)&&(cancer[m][x-1]==255)&&(cancer[m+1][x+1]==255)){
					a=m;b=x;
				}
				else if((cancer[m+1][x]==255)&&(cancer[m][x+1]==255)&&(cancer[m-1][x-1]==255)){
					c=m,d=x;
				}
			}
		}
	}
	int e;
	e=(c-a-1)*(d-b-1);
	printf("%d\n",e);
	return 0;
}