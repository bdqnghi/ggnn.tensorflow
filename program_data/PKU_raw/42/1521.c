int main()
{
	int i,n,j,t[100000],a,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&t[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++){
		if(t[i]!=k){
			a=i;
			printf("%d",t[i]);
			break;
		}
	}
	for(i=a+1;i<n;i++){
		if(t[i]!=k){
			printf(" %d",t[i]);
		}
		
	}
	
	return 0;
}