int main()
{
	int a[100][100]={0};
	int n,i,j,x1=0,x2=0,y1=0,y2=0,x=0;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			cin>>a[i][j];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==0){
				x1=j;
				y1=i;
				x=1;
				break;
			}
			
		}
		if(x) break;
	}
	x=0;
	for(i=n-1;i>=0;i--){
		for(j=n-1;j>=0;j--){
			if(a[i][j]==0){
				x2=j;
				y2=i;
				x=1;
				break;
			}
			
		}
		if(x) break;
	}
	if(x1==x2||y1==y2) cout<<0<<endl;
	else cout<<(x2-x1-1)*(y2-y1-1)<<endl;

	return 0;
}
