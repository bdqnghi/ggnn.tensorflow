int main()
{
	int row,col,a[100][100],k,j,i,m;
	scanf("%d %d",&row,&col);
	for(j=0;j<row;j++){
		for(i=0;i<col;i++){
			scanf("%d",&a[j][i]);
		}
	}

	for(i=0;i<col;i++){
		j=0;
		for(m=i;(j<row)&&(m>=0);j++,m--){
			printf("%d\n",a[j][m]);
		}
	}
	for(j=1;j<row;j++){
		    i=col-1;
			for(m=i,k=j;(k<row)&&(m>=0);k++,m--){
			printf("%d\n",a[k][m]);
		}
	}
	
	return 0;
}
