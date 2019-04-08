/*
 *  ???? ?????????
 *
 *  ??: 2011-11-6
 *  ??????
 */
int main (){
	int a[100][100],n,m,i,j,x,y;
	cin>>n;
	for(m=1;m<=n;m++){
		int s=0,t=0;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j];
		for(y=n;y>=2;y--){
		for(i=0;i<n-t;i++){
			x=a[i][0];
			for(j=0;j<n-t;j++)
				if(x>a[i][j])x=a[i][j];
			for(j=0;j<n-t;j++)
				a[i][j]-=x;
		}
		for(j=0;j<n-t;j++){
			x=a[0][j];
			for(i=0;i<n-t;i++)
				if(x>a[i][j])x=a[i][j];
			for(i=0;i<n-t;i++)
				a[i][j]-=x;
		}
		s=s+a[1][1];
		for(i=0;i<n-t;i++){
			for(j=1;j<n-t-1;j++)
				a[i][j]=a[i][j+1];
		}
		t++;
		for(j=0;j<n-t;j++)
			for(i=1;i<n-t;i++)
				a[i][j]=a[i+1][j];
		}
		cout<<s<<endl;
	}
	return 0;
}