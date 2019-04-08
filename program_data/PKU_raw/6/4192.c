
int main(){
	int array[200][200];
	int *p[200];
	for (int i=0;i<=200;i++)
		p[i]=array[i];
	int k=0;
	cin >> k;
	for (int i=0;i<k;i++){
		int m=0,n=0,sum=0;
		cin >> m >> n;
		for (int j=0;j<m;j++)
			for (int l=0;l<n;l++){
				cin >> p[j][l];
				if (j==0||l==0||j==m-1||l==n-1)
					sum+=p[j][l];
			}
		cout << sum << endl;
	}
	return 0;
}