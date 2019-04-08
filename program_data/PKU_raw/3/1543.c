int main()
{
	int n,k,i,j,c,a[1000],b[1000];
		scanf("%d%d",&n,&k);
		j=0;
		c=0;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[j]=k-a[i];
			j++;
		}
		for(j=0;j<n;j++){
			for(i=0;i<n;i++){
				if(b[j]==a[i]){
					c++;
				}
			}
		}
		if(c!=0){
			printf("yes");
		}
		else{
					printf("no");
				}

		return 0;
}
