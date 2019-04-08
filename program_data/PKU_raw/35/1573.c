int main()
{
	int m,n;
	int a[8][8];
	int i,j,k,b=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			for(k=j+1;k<n;k++){
				if(a[i][j]<a[i][k])break;
			}
			if(k==n)break;
		}
		for(k=0;k<m;k++){
			if(a[i][j]>a[k][j])break;
		}
		if(k==m)printf("%d+%d\n",i,j);
		else b+=1;
	}
	if(b==m)printf("No\n");
	return 0;
}
	


