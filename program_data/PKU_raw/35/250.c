

int main()
{
	int m,n,a[8][8],i,j,p=0,k,c=0,x,y,q=1;
	scanf("%d, %d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		c=0;
		for(j=0;j<n;j++){
			if(a[i][j]>p){
				p=a[i][j];
				x=i;
				y=j;
			}
		}
		for(k=0;k<m;k++){
			if(a[k][y]>p){
				c++;
				if(c==m-1){
					q=0;
					printf("%d+%d",x,y);
				}
			}
		}
	}
	if(q==1){
		printf("No");
	}
	return 0;
}
