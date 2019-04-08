int main()
{
	int a[M][M]={0};
	int m ,n;
	scanf("%d%d",&m,&n);
	a[M/2][M/2]=m;
	for(int k=0;k<n;k++){
	    int b[M][M]={0};
	    for(int i=1;i<M-1;i++){
		for(int j=1;j<M-1;j++){
		    b[i][j]+=a[i][j];
		    for(int I=-1;I<=1;I++){
		        for(int J=-1;J<=1;J++){
    			   b[i+I][j+J]+=a[i][j];
    		        }
		    }
		}
	    }
          for(int q=0;q<M;q++){
            for(int p=0;p<M;p++)
	   a[q][p]=b[q][p];
            }
	}
	for(int i=0;i<M;i++){
	    for(int j=0;j<M-1;j++)
	        printf("%d ",a[i][j]);
	    printf("%d\n",a[i][M-1]);
	}
} 