
int matrix(int p[5][5], int, int);
int main()
{
	int i,j,mat[5][5], n, m;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&mat[i][j]);

	scanf("%d %d", &n, &m);
	if(matrix(mat,n,m))
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				printf("%d",mat[i][j]);
				if(j<4) printf(" ");
			}
			if(i<4) printf("\n");
		}
else printf("error");
	return 0;
}

int matrix(int p[5][5], int n, int m)
{ 
	int i,temp[5]={0};
	if(n<5 && m<5){
		for(i=0;i<5;i++){
			temp[i]=*(*(p+n)+i);
			*(*(p+n)+i)=*(*(p+m)+i);
			*(*(p+m)+i)=temp[i];
		}
		return(1);
	}
	else return(0);
}
