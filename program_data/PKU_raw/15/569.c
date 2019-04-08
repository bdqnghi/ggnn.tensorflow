int main()
{
	int a[100][100];
	int n,x=0,y=0,i,j,s;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==0){
				x++;
			}
		}
		if(x>0)
			break;
		}
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if(a[i][j]==0){
				y++;
			}
		}
		if(y>0)
			break;
	}
	s=(x-2)*(y-2);
	printf("%d",s);
	return 0;
}
