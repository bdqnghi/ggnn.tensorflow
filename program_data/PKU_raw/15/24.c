int main()
{
	int n,i,j,a,b,c,d,z;
	int point[100][1000];
	scanf("%d",&n);

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&point[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(point[i][j]==0){
				if(i==0&&j==0||i==0&&j!=0&&point[i][j-1]!=0  ||i!=0&&point[i-1][j]!=0&&j!=n-1&&point[i][j+1]==0&&j!=0&&point[i][j-1]!=0||i!=0&&point[i-1][j]!=0&&j!=n-1&&point[i][j+1]==0&&j==0){
					a=i;
				    b=j;
				}
				else if(j==n-1||j!=n-1&&point[i][j-1]==0&&point[i][j+1]!=0){
					c=i;
					d=j;
				}
			}
		}
	}
	z=(c-a-1)*(d-b-1);
	printf("%d",z);
	
	return 0;
}


