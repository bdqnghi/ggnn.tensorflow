int n;
int matrixx[110][110];
//?????? 
void Del(){
	for(int i=2;i<n;i++){
		for(int j=1;j<=n;j++){
			matrixx[i][j] = matrixx[i+1][j];
			}
		}
	for(int i=2;i<n;i++){
		for(int j=1;j<=n;j++){
			matrixx[j][i] = matrixx[j][i+1];
			}
		}
	return;
	}
int main(){
	cin>>n;
	int minnum;
	int sum;
	for(int s=1;s<=n;s++){
		sum=0;
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n;k++){
				cin>>matrixx[j][k];
				}
			}
		 for(int x;x<3000;x++){
				if(x==5){
					int y=0;
					y++;
					}
				}
		for(int i=1;i<n;i++){
			for(int j=1;j<=n;j++){
				for(int k=1;k<=n;k++){
					if(k==1) minnum = matrixx[j][k];
					else minnum = min(minnum,matrixx[j][k]);
					}
				for(int k=1;k<=n;k++){
					matrixx[j][k]-=minnum;
					}
				}
	 //???? 
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n;k++){
				if(k==1) minnum = matrixx[k][j];
				else minnum = min(minnum,matrixx[k][j]);
				}
			for(int k=1;k<=n;k++){
				matrixx[k][j]-=minnum;
				}
			}
			sum+=matrixx[2][2];
			Del();
			}
		cout<<sum<<endl;
		}
	
	return 0;
	}
