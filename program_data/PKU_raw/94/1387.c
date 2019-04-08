int s[510];
int main(){
	int i,n,j,t;

	scanf("%d",&n);
	for (i=j=0;i<n;i++){
		scanf("%d",&t);
		if (t&1){
			s[j++]=t;
		}
	}
	sort(s,s+j);
	printf("%d",s[0]);
	for (i=1;i<j;i++){
		printf(",%d",s[i]);
	}
}