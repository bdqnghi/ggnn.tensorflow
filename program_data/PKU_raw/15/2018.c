int main()
{
	int n;
	scanf("%d",&n);
	int sz[100][100];
	int i,j,a,b,c,d,x;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	int tag;
	for(i=0;i<n;i++){
		tag=0;
		for(j=0;j<n;j++){
			if((sz[i][j]==0)&&(sz[i][j-1]!=0)&&(sz[i-1][j]!=0)){
				a=i;
				b=j;
				tag=1;
				break;
			}
		}
		if(tag==1){break;}
	}
	for(i=n-1;i>=0;i--){
		for(j=n-1;j>=0;j--){
			if((sz[i][j]==0)&&(sz[i+1][j]!=0)&&(sz[i][j+1]!=0)){
				c=i;
				d=j;
				tag=2;
				break;
			}
		}
		if(tag==2){break;}
	}
	x=(c-a-1)*(d-b-1);
	printf("%d",x);
	return 0;
}

