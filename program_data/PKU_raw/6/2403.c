int main(){int i,j,k,sum;
	int m;int a[200][220];
	scanf("%d",&m);
	for(k=1;k<=m;k++)
	{        sum=0;
		int row,col;
		scanf("%d%d",&row,&col);
		for(i=1;i<=row;i++)
		{
			for(j=1;j<=col;j++){scanf("%d",&a[i][j]);
			}
		}
	
		for(i=1;i<=row;i++){sum=sum+a[i][1]+a[i][col];} 	
	
		for(j=2;j<=col-1;j++){sum=sum+a[1][j]+a[row][j];}

	               if(row==1){sum/=2;}


                     printf("%d\n",sum);
	}return 0;
}

