int main(){
	int n,s[A],k,m,e,i;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
	scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++){
		for(m=i+1;m<n;m++){
			e=0;
			e=s[i]+s[m];
			if(s[i]+s[m]==k){
				printf("yes");
				return 0;
			}
		}
	}
	printf("no");
	return 0;
}
		

