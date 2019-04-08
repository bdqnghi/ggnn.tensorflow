int main()
{
	int i,j,sum=0,c,e,f,m,n,a[100][100];
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
		scanf("%d",&a[i][0]);
		for(j=1;j<n;j++){
			scanf(" %d",&a[i][j]);
		}
	}
	for(c=0,e=m,f=n;;c++,e--,f--){
		for(j=c;j<f;j++){
			printf("%d\n",a[c][j]);
			sum++;
		}
		if(sum==m*n)
			break;
		for(i=c+1;i<e;i++){
			printf("%d\n",a[i][f-1]);
			sum++;
		}
		if(sum==m*n)
			break;
		for(j=f-2;j>c-1;j--){
			printf("%d\n",a[e-1][j]);
			sum++;
		}
		if(sum==m*n)
			break;
		for(i=e-2;i>c;i--){
			printf("%d\n",a[i][c]);
			sum++;
		}
		if(sum==m*n)
			break;
	}
	return 0;
}
