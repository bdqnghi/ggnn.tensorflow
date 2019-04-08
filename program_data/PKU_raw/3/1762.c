int main()
{
	int n,b,s[1000],a;
	scanf("%d %d",&n,&b);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	for(int k=0;k<n;k++){
		for(int i=1;i<n-k;i++){
			a=s[k]+s[k+i];
			if(a==b){
				printf("yes");
				return 0;
			}
		}
	}
	printf("no");	
	return 0;
}