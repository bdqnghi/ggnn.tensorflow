//#include<fstream>

int main(){
	
//	ifstream cin;
//	cin.open("6.in");
	
	int n;
	int sum;
	int min;
	cin>>n;
	
	int m[n][n][n];
	
	
	for(int k=0;k<n;k++){
		for(int x=0;x<n;x++){
			for(int y=0;y<n;y++){
				cin>>m[k][x][y];
			}
		}
		
		sum=0;
		
		for(int l=1;l<n;l++){
			
			for(int x=0;x<n;x++){
				min=*min_element(m[k][x],m[k][x]+n);
				for(int y=0;y<n;y++){
					m[k][x][y]-=min;
				}
			}
			
			for(int y=0;y<n;y++){
				min=m[k][0][y];
				for(int x=1;x<n;x++){
					if(m[k][x][y]<min) min=m[k][x][y];
				}
				for(int x=0;x<n;x++){
					m[k][x][y]-=min;
				}
			}
			
			sum+=m[k][l][l];
			
			for(int i=0;i<n;i++){
				m[k][l][i]=m[k][0][i];
				m[k][i][l]=m[k][i][0];
			}
		}
		cout<<sum<<endl;
	}
}