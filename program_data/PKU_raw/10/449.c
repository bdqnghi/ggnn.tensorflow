


int main()
{
	int height[27];
	int result[27];
	int k;
	int i , j;
	int nmax;
	cin>>k;
	for(i = 1; i <= k; i++){
		cin>>height[i];
	}
	height[k+1] = 0;
	result[k+1] = 0;
	for(i = k; i > 0; i--){
		nmax = 0;
		for(j = i+1; j <= k+1; j++){
			if(height[i] >= height[j]){
				if(result[j] > nmax){
					nmax = result[j];
				}
			}
		}
		result[i] = nmax + 1;
	}
	nmax = 0;
	for(i = 1; i < k; i++){
		if(result[i] > nmax){
			nmax = result[i];
		}
	}
	cout<<nmax<<endl;
	return 0;
}