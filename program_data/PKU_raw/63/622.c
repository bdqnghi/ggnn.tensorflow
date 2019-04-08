int main(){
    int x,y;
    int a[100][100],b[100][100],c[100][100];
    cin>>x>>y;
    int i,j,k;
    for(i=0;i<x;i++)
    	for(j=0;j<y;j++){
    		cin>>a[i][j];
    	}
    int x1,y1;
    cin>>x1>>y1;
    for(i=0;i<x1;i++)
    	for(j=0;j<y1;j++){
    		cin>>b[i][j];
    	}
    for(i=0;i<x;i++)
    	for(j=0;j<y1;j++)
    		for(k=0;k<y;k++){
    			c[i][j]=a[i][k]*b[k][j]+c[i][j];
    		}
    for(i=0;i<x;i++){
    	for(j=0;j<y1-1;j++){
    		cout<<c[i][j]<<' ';
    	}cout<<c[i][y1-1]<<endl;
    }
    return 0;
}
