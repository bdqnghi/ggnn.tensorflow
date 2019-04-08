int main()
{
	int x[10],y[10],i,j,k;
	cin>>x[0]>>y[0];
	for(i=1;;++i){
		x[i]=x[i-1]/2;
		if(x[i]==1)
			break;
	}
	for(j=1;;++j){
		y[j]=y[j-1]/2;
		if(y[j]==1)
			break;
	}
	for(k=0;;++k)
	{
		if(x[i-k]!=y[j-k])
			break;
	}
	cout<<x[i-k+1];
	return 0;
}