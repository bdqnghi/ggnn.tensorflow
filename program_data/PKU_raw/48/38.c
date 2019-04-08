int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int a[11][11]={0};
	
	a[5][5]=m;
	int r,i,j,i1,j1;
	for(r=0;r<n;r++){
		int b[11][11]={0};
		for(i=1;i<=9;i++){
			for(j=1;j<=9;j++){
				if(a[i][j]!=0){
					for(i1=i-1;i1<=i+1;i1++){
						for(j1=j-1;j1<=j+1;j1++){
							b[i1][j1]+=a[i][j];
						}
					}
				}
			}
		}
		for(i1=1;i1<=9;i1++){
			for(j1=1;j1<=9;j1++){
				a[i1][j1]+=b[i1][j1];
			}
		}
	}
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			printf("%d",a[i][j]);
			if(j!=9)
				printf(" ");
			else
				printf("\n");
		}
	}
}
