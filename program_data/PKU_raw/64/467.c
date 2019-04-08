



int main(){

	int n=0;

	cin>>n;

	int dis[10][3];

	float ans[1000][7];

	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>dis[i][j];
			
		}
	}

	int num=0;

	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			
			for(int k=0;k<3;k++){
				ans[num][k]=dis[i][k];
			}
			for(int k=0;k<3;k++){
				ans[num][k+3]=dis[j][k];
				
			}
				ans[num][6]=0.0;
			for(int k=0;k<3;k++){
				ans[num][6]+=(dis[i][k]-dis[j][k])*(dis[i][k]-dis[j][k]);
			}

			ans[num][6]=sqrt(ans[num][6]);

			num++;
		}
	}

	for(int i=0;i<num;i++){
		for(int j=num-1;j>i;j--){
			if(ans[j][6]>ans[j-1][6]){
				
				for(int k=0;k<7;k++){
					float tmp=ans[j][k];
					ans[j][k]=ans[j-1][k];
					ans[j-1][k]=tmp;

				}
			}
		}
	}

	for(int i=0;i<num;i++){
		cout<<'('<<ans[i][0]<<','<<ans[i][1]<<','<<ans[i][2]<<")-("<<ans[i][3]<<','<<ans[i][4]<<','<<ans[i][5]<<")=";
		printf("%.2f",ans[i][6]);
		if(i<num-1) cout<<endl;
	}

	
	return 0;


	
}