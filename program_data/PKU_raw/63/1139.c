
int main()
{
	int a[150][150]={0};
	int b[150][150]={0};
	int x1,x2,y1,y2,i,j;
	scanf("%d %d",&x1,&y1);
	for(i=0;i<x1;i++){
		for(j=0;j<y1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&x2,&y2);
	for(i=0;i<x2;i++){
		for(j=0;j<y2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	int c[150][150]={0};
	int k;
	for(i=0;i<x1;i++){
		for(j=0;j<y2;j++){
	for(k=0;k<y1;k++){
		c[i][j]=c[i][j]+a[i][k]*b[k][j];
	}
		}
	}
	for(i=0;i<x1;i++){
		for(j=0;j<y2-1;j++){
			printf("%d ",c[i][j]);
		}
		printf("%d",c[i][y2-1]);
		printf("\n");
	}
	return 0;
}

