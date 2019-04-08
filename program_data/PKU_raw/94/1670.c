int main(){
	int N,sz[500],i,s[500],k,max,e,f=0;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&(sz[i]));
	}
	k=0;
	for(i=0;i<N;i++){
		if(sz[i]%2!=0){
				s[k]=sz[i];
				k++;
			}
		}
	for(f=1;f<=k;f++){
		max=0;
		for(i=0;i<=k-f;i++){
			if(s[i]>s[max]){
			max=i;
			}
		}
		if(max!=k-f){
		e=s[max];
		s[max]=s[k-f];
		s[k-f]=e;
		}
	}
	printf("%d",s[0]);
	for(i=1;i<=k-1;i++){
		printf(",%d",s[i]);
	}
	return 0;
}
