int main ()
{
	int n,k,a=1,i,j;
	int sz[1000];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(sz[i]+sz[j]==k){	
				a=0;
				
				
			}
		}
	}
	while(a==0){
		printf("yes");
		break;
	}

	while(a){
		printf("no");
		break;
	}
	return 0;
}
