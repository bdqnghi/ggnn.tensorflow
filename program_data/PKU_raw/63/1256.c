
int main()
{
	int A[100][100];
	int B[100][100];
	int C[100][100];
	int i,j,a,b,d,q;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&A[i][j]);
		}
	}
	scanf("%d",&b);
	scanf("%d",&d);
	for(i=0;i<b;i++){
		for(j=0;j<d;j++){
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<d;j++){
			for(q=0;q<b;q++){
				C[i][j]+=A[i][q]*B[q][j];
			}
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<d;j++){
			if(j<d-1)printf("%d ",C[i][j]);
			if(j==d-1)printf("%d\n",C[i][j]);
		}
	}
	return 0;
}