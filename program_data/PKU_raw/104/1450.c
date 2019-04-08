int main()
{
	int x,y,i,j;
	int X[11],Y[11];
	cin>>x>>y;
	for(i=1;x>=1;i++){
		X[i]=x;
	    x=x/2;}
	for(j=1;y>=1;j++){
		Y[j]=y;
	    y=y/2;}
	for(j=j-1,i=i-1;;j--,i--)
		if(X[i]!=Y[j]){
			cout<<X[i+1]<<endl;
			break;}
	return 0;
}
