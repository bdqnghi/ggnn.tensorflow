int main()
{
	int n,s[50000][2];
	int i,j,k;
	scanf("%d",&n);

	for(i=0;i< n;i++){
		scanf("%d%d",&s[i][0],&s[i][1]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(s[i][0]>s[j][0]){
				k=s[i][0];
				s[i][0]=s[j][0];
				s[j][0]=k;
				k=s[i][1];
				s[i][1]=s[j][1];
				s[j][1]=k;
			}
		}
	}
	k=0;
	for(i=0;i<n;i++){
		if(s[i][1]>=s[i+1][0]){
			if(s[i][1]>s[i+1][1])
				s[i+1][1]=s[i][1];
		}
		else k=1;
	}
	if(k==1)
		printf("no\n");
	else printf("%d %d\n",s[0][0],s[n-1][1]);
	return 0;
}