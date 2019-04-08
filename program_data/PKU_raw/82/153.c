int main()
{
	int n,i,k,j,e;
	k=0;
	int shou[100],shu[100];
	int sz[100];
	for(j=0;j<100;j++){
		sz[j]=0;
	}
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&(shou[i]),&(shu[i]));
		if(shou[i]>=90&&shou[i]<=140&&shu[i]>=60&&shu[i]<=90){
			sz[k]=sz[k]+1;
		}
		else{k=k+1;
		}
	}
	for(j=0;j<k;j++){
		if(sz[j]>sz[j+1]){
			e=sz[j];
			sz[j]=sz[j+1];
			sz[j+1]=e;
		}
	}
	printf("%d",sz[k]);
	return 0;

	
	


}