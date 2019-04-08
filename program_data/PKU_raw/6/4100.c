int main()
{
	int n,ROW[100],COL[100],row,col,a[100][100],s=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&ROW[i],&COL[i]);
	
		for(row=0;row<ROW[i];row++){
			for(col=0;col<COL[i];col++){
			scanf("%d",&a[row][col]);
			}
		}

	
		for(col=0;col<COL[i];col++){
			s=s+a[0][col]+a[ROW[i]-1][col];
		}
		for(row=1;row<ROW[i]-1;row++){
			s=s+a[row][0]+a[row][COL[i]-1];
		}
		printf("%d\n",s);
		s=0;
	}
	
	return 0;
}
		