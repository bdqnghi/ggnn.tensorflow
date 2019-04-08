int main()
{
	int n;
	scanf("%d",&n);
	int sz[300];
	for(int i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	printf("%d",sz[0]);
	for(int j=1;j<n;j++){
        int k;
		for(k=0;k<j;k++){
			if(sz[j]==sz[k])
				break;
		}
		if(k==j){
			printf(",%d",sz[j]);
		}
		else
			continue;
	}
	return 0;
}
