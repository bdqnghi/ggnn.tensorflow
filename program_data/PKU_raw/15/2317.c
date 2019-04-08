int a[1000][1000];
void main()
{
	int n;
	scanf("%d",&n);
    int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int a1=-1,a2=-1,b1=-1,b2=-1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if((i==0&&j==0&&a[i][j]==0)||(a[i][j]==0&&a[i+1][j]==0&&a[i][j+1]==0&&a[i-1][j]!=0&&a[i][j-1]!=0)){
				a1=i;b1=j;	
				break;
			}
		}
	}
	for(i=n-1;i>=0;i--){
		for(j=n-1;j>=0;j--){
			if((i==n-1&&j==n-1&&a[i][j]==0)||(a[i][j]==0&&a[i+1][j]!=0&&a[i][j+1]!=0&&a[i-1][j]==0&&a[i][j-1]==0)){
				a2=i;b2=j;
				break;
			}
		}
	}
	int sum=0;
	for(i=a1+1;i<a2;i++){
		for(j=b1+1;j<b2;j++){
			if(a[i][j]!=0) sum+=1;
		}
	}
	printf("%d\n",sum);	
}