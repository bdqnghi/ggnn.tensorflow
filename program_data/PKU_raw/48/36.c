
int main()
{
    int m,n,a[12][12],b[12][12],i,j,k;
	scanf("%d %d",&m,&n);
    for(j=0;j<=10;j++){
			for(k=0;k<=10;k++){
				b[j][k]=0;
				a[j][k]=0;
			}
	}
    b[5][5]=m;
	for(i=0;i<n-1;i++){
		for(j=1;j<=9;j++){
			for(k=1;k<=9;k++){
				a[j][k]+=2*b[j][k]+b[j-1][k]+b[j][k-1]+b[j+1][k]+b[j][k+1]+b[j-1][k-1]+b[j+1][k+1]+b[j+1][k-1]+b[j-1][k+1];
			}
		}
        for(j=1;j<=9;j++){
			for(k=1;k<=9;k++){
				b[j][k]=a[j][k];
				a[j][k]=0;
			}
		}
	}
    for(j=1;j<=9;j++){
			for(k=1;k<=9;k++){
				a[j][k]+=2*b[j][k]+b[j-1][k]+b[j][k-1]+b[j+1][k]+b[j][k+1]+b[j-1][k-1]+b[j+1][k+1]+b[j+1][k-1]+b[j-1][k+1];
			}
		}
    for(j=1;j<=9;j++){
		for(k=1;k<9;k++){
			printf("%d ",a[j][k]);
		}
		printf("%d\n",a[j][9]);
	}
	return 0;

}