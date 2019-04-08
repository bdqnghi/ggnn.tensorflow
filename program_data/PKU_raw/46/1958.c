
int main()
{
	int row,col;               
	int sz[100][100];
	int i,j;
	scanf("%d%d",&row,&col);
	for(j=0;j<row;j++){
		for(i=0;i<col;i++){
			scanf("%d",&sz[j][i]);
		}
	}

	int n;
	int k,I,J,M,N;
	if(col%2==0&&row%2==0){
		if(col<=row){
			n=col/2;
		}else{
			n=row/2;
		}
		for(k=0;k<n;k++){
			for(I=k;I<col-k-1;I++){
		               printf("%d\n",sz[k][I]);
			}
		         for(J=k;J<row-k-1;J++){
			    printf("%d\n",sz[J][col-k-1]);
			}
			for(M=col-k-1;M>k;M--){
			    printf("%d\n",sz[row-k-1][M]);
			}
		         for(N=row-k-1;N>k;N--){
			    printf("%d\n",sz[N][k]);
			}
		}
	}else{
		if(row<=col){
			n=row/2+1;
			for(k=0;k<n;k++){
			    for(I=k;I<col-k-1;I++){
		             printf("%d\n",sz[k][I]);
				}
			    if(2*k<row-1){
			    	for(J=k;J<row-k-1;J++){
			              printf("%d\n",sz[J][col-k-1]);
				}
			    }else{
				for(J=k;J<=row-k-1;J++){
					printf("%d\n",sz[J][col-k-1]);
				}
				break;
			    }
		             for(M=col-k-1;M>k;M--){
			        printf("%d\n",sz[row-k-1][M]);
			    }
		             for(N=row-k-1;N>k;N--){
			        printf("%d\n",sz[N][k]);
			    }
			}
		}else{
			n=col/2+1;
			for(k=0;k<n;k++){
			    for(I=k;I<col-k-1;I++){
		                 printf("%d\n",sz[k][I]);
			    }
			    if(k!=n-1){
		                 for(J=k;J<row-k-1;J++){
			            printf("%d\n",sz[J][col-k-1]);
				}
			     }else{
				for(J=k;J<=row-k-1;J++){
					printf("%d\n",sz[J][col-k-1]);
				}
				break;
			    }
			    for(M=col-k-1;M>k;M--){
			        printf("%d\n",sz[row-k-1][M]);
			    }
		             for(N=row-k-1;N>k;N--){
			        printf("%d\n",sz[N][k]);
			    }
			}
		}
	}
	return 0;
}
