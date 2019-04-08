int main(){
	int i,j,k,m,n,a,b;
	int sz[200] [4];
	scanf("%d",&n);
	double r[200][200],o[100000],e;
	for(i=0;i<n;i++){
		scanf("%d %d %d",&sz[i] [1],&sz[i] [2],&sz[i] [3]);
		}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
	
		r[i][j]=sqrt((double)(((sz[i][1])-(sz[j][1]))*((sz[i][1])-(sz[j][1]))+((sz[i][2])-(sz[j][2]))*((sz[i][2])-(sz[j][2]))+((sz[i][3])-(sz[j][3]))*((sz[i] [3])-(sz[j][3]))));
		}
     }
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
	
		o[(i)*n+j]=r[i][j];

		}
     }
	for(i=1;i<=n*n;i++){
		for(j=1;j<n*n;j++){
			if(o[j]<o[j+1]){
				e=o[j];
				o[j]=o[j+1];
				o[j+1]=e;

			}
		}
	}
	//for(i=1;i<=n*n;i++)cout<<o[i];
	for(i=0;i<n*n;i++){
		if(o[i]==o[i-1])
			continue;
		for(j=0;j<n;j++){
			for(b=j+1;b<n;b++){
				if(o[i+1]==r[j][b]){printf("(%d,%d,%d)",sz[j][1],sz[j][2],sz[j][3]);printf("%c",'-');
				printf("(%d,%d,%d)",sz[b][1],sz[b][2],sz[b][3]);printf("%c",'=');
				printf("%.2lf",r[b][j]);cout<<endl;
				}
			}
		}
	}
    return 0;
}
