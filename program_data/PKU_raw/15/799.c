int main()
{
	int n,x=2,y=2;
	scanf("%d",&n);
	int a[ROW][COL],i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		 
		for(j=0;j<n;j++){
			if(a[i][j]==0&&a[i][j+1]==0){
			x++;}
		}
	}
    for(j=0;j<n;j++){
		 
		for(i=0;i<n;i++){
			if(a[i][j]==0&&a[i+1][j]==0){
			y++;}
		}
	}
	int s;
	s=(x/2-2)*(y/2-2);
	printf("%d",s);
	return 0;
}


