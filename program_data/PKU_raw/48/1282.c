int main(){
	int a[11][11],b[11][11];	
	int i,j;
	int mushi,nichi,n;
	
	scanf("%d%d",&mushi,&nichi);
	
    for(i=0;i<11;i++){
		for(j=0;j<11;j++){
		    a[i][j]=0;
			b[i][j]=0;
		}
	}
    a[5][5]=mushi;
    b[5][5]=mushi;
	for(n=0;n<nichi;n++){
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
		    b[i][j]+=a[i+1][j-1]+a[i+1][j]+a[i+1][j+1]+a[i][j-1]+a[i][j+1]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j];
		}
	}
	for(i=0;i<11;i++){
		for(j=0;j<11;j++){
		    a[i][j]=b[i][j];
		}
	}
	}


	for(i=1;i<10;i++){
		for(j=1;j<9;j++){
		    printf("%d ",a[i][j]);
		}
            printf("%d\n",a[i][9]);
	}
	
		

return 0;
}
