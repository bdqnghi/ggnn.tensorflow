int main(){
        int a[11][11][5];
        int m,n;
        scanf("%d%d",&m,&n);
        int i,j,k;

        for(i=0;i<11;i++){
                for(j=0;j<11;j++){
                        a[i][j][0]=0;
                }
        }

		a[5][5][0]=m;
	

        

        for(k=1;k<=n;k++){
				

                for(i=0;i<=10;i++){
                        for(j=0;j<=10;j++){
							if(i>0&&i<10&&j>0&&j<10){
								a[i][j][k]=2*a[i][j][k-1]+a[i-1][j-1][k-1]+a[i-1][j][k-1]+a[i-1][j+1][k-1]+a[i][j-1][k-1]+a[i][j+1][k-1]+a[i+1][j-1][k-1]+a[i+1][j][k-1]+a[i+1][j+1][k-1];
							}
							else{
								a[i][j][k]=a[i][j][k-1];
							}
                                
                       }
                }

			


        }



       for(i=1;i<=9;i++){
                for(j=1;j<=9;j++){
					if(j<9){
                        printf("%d ",a[i][j][n]);
					}
					if(j==9){
						printf("%d\n",a[i][j][n]);
					}
                }

				
        }


        return 0;
}
