int main(int argc, char* argv[])
{
	int n,i,j;
	int area=0;
	int a[num][num];
	int x[2];
	int y[2];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			if((j+1)%n==0)
				printf("\n");
		}
	}
	int flag=0;
	for(i=0;i<n&&flag==0;i++){
		for(j=0;j<n&&flag==0;j++){
			if(a[i][j]==0){
				x[0]=i;
                x[1]=j;
				flag=1;
				break;
			}
		}
	}
	for(i=n-1;i>=0&&flag==1;i--){
		for(j=n-1;j>=0&&flag==1;j--){
			if(a[i][j]==0){
				y[0]=i;
				y[1]=j;
				flag=0;
				break;
			}
		}
	}
	area=area+(y[1]-x[1]-1)*(y[0]-x[0]-1);
	printf("%d",area);
	return 0;
}