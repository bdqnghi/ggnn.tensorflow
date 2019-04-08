int main(){
	int n;
	cin>>n;
	int i=0;
	while(i<n){
		int a[n][n];
		int b[n],c[n];
		int t=1;
		int j,k;
		int sum=0;
		for(j=0;j<n;j++)
			for(k=0;k<n;k++){
				cin>>a[j][k];
			}
		while(t<n){
			for(j=0;j<n;j++){
						if(a[j][0]<0)j++;
						b[j]=a[j][0];
						for(k=0;k<n;k++){
							if(b[j]>a[j][k]&&a[j][k]>=0)
								b[j]=a[j][k];
						}
					}
			for(j=0;j<n;j++){
				for(k=0;k<n;k++){
					if(a[j][k]>=0){
					a[j][k]=a[j][k]-b[j];}
				}
			}
			for(j=0;j<n;j++){
				if(a[0][j]<0)j++;
				c[j]=a[0][j];
				for(k=0;k<n;k++){
					if(c[j]>a[k][j]&&a[k][j]>=0)
						c[j]=a[k][j];
				}
			}
			for(j=0;j<n;j++){
				for(k=0;k<n;k++)
					if(a[k][j]>=0){
					a[k][j]=a[k][j]-c[j];}
			}
			sum=sum+a[t][t];
			for(j=0;j<n;j++){
				a[t][j]=-1;
				a[j][t]=-1;
			}
			t++;
		}
			i++;
			cout<<sum<<endl;
			sum=0;
	}
	return 0;
}