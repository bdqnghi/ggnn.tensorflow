
int main(){
	int a[100][100];
	int n;
	int i,j;
	int x1,y1,x2,y2;
	x1=0;
	y1=0;
	x2=0;
	y2=0;
	int m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0){
				x1=i;
				y1=j;
				break;
			}
			else;
		}
		if(a[x1][y1]==0){
			break;
		}
	}
	for(i=n-1;i>=0;i--){
		for(j=n-1;j>=0;j--){
			if(a[i][j]==0){
				x2=i;
				y2=j;
				break;
			}
			else;
		}
		if(a[i][j]==0){
			break;
		}
		else;
	}
     m=(y2-y1+1-2)*(x2-x1+1-2);
	 printf("\n%d",m);
	 return 0;

}