int main(){
	int n, i, j, a1, a2, b1, b2, m;
	scanf("%d", &n);
	int num[1000][1000];
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			scanf("%d", &num[i][j]);
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			if(num[i][j]==0){
				a1=i;
				a2=j;
			}
	for(i=n-1; i>0; i--)
    	for(j=n-1; j>0; j--)
            if(num[i][j]==0){
				b1=i;
				b2=j;
			}
	m = (a1-b1-1)*(a2-b2-1);
	printf("%d", m);
	return 0;
}

