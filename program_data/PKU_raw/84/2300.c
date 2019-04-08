int main()
{
	int n;
	scanf("%d",&n);
	int sz[100];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
	int maxIndex, e;
for(int k  =   1  ;   k <=  n; k++){
	maxIndex = 0;
	for(int i = 0; i <= n-k; i++){
			if(sz[i] > sz[maxIndex]){
					maxIndex = i;
			}
	}	
	if(maxIndex != n-k){
		e = sz[maxIndex];
		sz[maxIndex] = sz[n-k];
		sz[n-k] =  e;
	}
}
 printf("%d\n",sz[n-1]);
		printf("%d\n",sz[n-2]);
	return 0;
}
