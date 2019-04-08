int main()
{
int i,j,k;
int m,n;
double ave;
cin>>m>>n;
int ma[30][30];
for(i=1;i<=m;i++){
	for(j=1;j<=n;j++){
		cin>>ma[i][j];
	}
}
for(j=0;j<=29;j++){
	ma[0][j]=-1;
	ma[m+1][j]=-1;
}
for(i=0;i<=29;i++){
	ma[i][0]=-1;
	ma[i][n+1]=-1;
}

for(i=1;i<=m;i++){
	for(j=1;j<=n;j++){
		if(ma[i][j]>=ma[i-1][j]&&ma[i][j]>=ma[i+1][j]&&ma[i][j]>=ma[i][j+1]&&ma[i][j]>=ma[i][j-1]){
			cout<<i-1<<" "<<j-1<<endl;
		}
	}
}

return 0;


}