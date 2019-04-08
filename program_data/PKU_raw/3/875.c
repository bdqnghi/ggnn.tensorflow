int main ()
{
	int n,k,i,j,p=1;
	int sz[1000];
	scanf("%d %d\n",&n,&k);
	scanf("%d",&sz[0]);
	for(i=1;i<n;i++){
		scanf(" %d",&sz[i]);
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(sz[i]+sz[j]==k){
				printf("yes");
				return 0;
			}
		}
	}
	printf("no");
	return 0;
}
			
