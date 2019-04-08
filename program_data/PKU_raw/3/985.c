int main()
{
	int n,k,i,j,sz[1000],m;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",(&sz[i]));
	}
	for(i=0;i<n-2;i++){
		for(j=i+1;j<n-1;j++){
			for(m=j+1;m<n;m++){
			   if(sz[i]+sz[j]+sz[m]==k){
				  printf("yes");
			      return 0;
			   }
			}
		}
	}
		printf("no");
		return 0;
}
