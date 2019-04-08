int main()
{
	int n,i,k,p,q,m=0;
	scanf("%d%d\n",&n,&k);
	int gram[n][n],sz[n];
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
		}
	for(p=0;p<n;p++){
		for(q=0;q<n;q++){
			gram[p][q]=sz[p]+sz[q];
			if(gram[p][q]==k){
			    m++;
				}
			}
		if(gram[p][q]==k){
			m++;
			}
		}
	if(m==0) printf("no");
	else printf("yes");
	return 0;
}
