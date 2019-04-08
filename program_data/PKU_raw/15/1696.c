int main()
{
	int n,i,j,x1,y1,x2,y2,situ=1;
	int a[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]==0){
				y2=i;x2=j;
			}
		}
	}
	for(i=0;situ;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==0){
				x1=j;y1=i;
				situ=0;
				break;
			}
			else {continue;}
		}
	}
	n=(x2-x1+1)*(y2-y1+1)-(2*(x2-x1+1)+2*(y2-y1+1)-4);
	printf("%d",n);
	return 0;

}