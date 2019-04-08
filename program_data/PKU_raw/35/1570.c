int main()
{
	int m,n,a[8][8],i,j,hang[8],judge,max,y,x;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			if(j==0){
				hang[i]=0;
			}else{
				if(a[i][j]>a[i][j-1]){
					hang[i]=j;
				}
			}
		}
	}
	for(i=0;i<m;i++){
		judge=1;
		max=a[i][hang[i]];
		for(j=0;j<m;j++){
			judge=judge&&(max<=a[j][hang[i]]);
		}
		if(judge){
			y=i;x=hang[i];
			break;
		}else {continue;}				
	}
		if(judge)
			printf("%d+%d",y,x);
		else
			printf("No");
		
	return 0;
}

