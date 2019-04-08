int main() 
{
	int a[100][100],r,c,i=0,j=0,x=0,y;
	cin>>r>>c;
	y=r+c;
	for(i=0;i<r;i++)
			for(j=0;j<c;j++)
				cin>>a[i][j];
	while(x<=y){
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
				if(i+j==x)cout<<a[i][j]<<endl;
		x++;
	}
	return 0;
}