
int main(){
    int a[1000][1000],b[1000][1000],i,j,c[1000][1000],x1,x2,y1,y2,k,m;//??????
    cin>>x1;
    cin>>y1;
    for(i=0;i<x1;i++)
    	for(j=0;j<y1;j++)
    		cin>>a[i][j];//????a??
    cin>>x2;
    cin>>y2;
    for(i=0;i<x2;i++)
        for(j=0;j<y2;j++)
        	cin>>b[i][j];//??b????
    for(i=0;i<x1;i++){
    	
    	for(j=0;j<y2;j++){
    		m=0;//?m???0
    		for(k=0;k<=y1;k++)  			
    		m=a[i][k]*b[k][j]+m;
    		c[i][j]=m;
    	}
    }
    for(i=0;i<x1;i++){
        for(j=0;j<y2-1;j++)
        	cout<<c[i][j]<<" ";
        cout<<c[i][j]<<endl;//????
    }
	return 0;//????
}