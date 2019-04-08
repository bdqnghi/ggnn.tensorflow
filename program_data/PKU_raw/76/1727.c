int main(){
	int n,min,max,k;
	int sz[50000][2];
	int gh[10000];
	int i=0,j=0,r=0,o=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d %d",&sz[i][0],&sz[i][1]);
	for(i=1;i<n;i++)
		if(sz[i][0]<sz[j][0])
			j=i;
	min=sz[j][0];
	j=0;
	for(i=1;i<n;i++)
		if(sz[i][1]>sz[j][1])
			j=i;
	max=sz[j][1];
	for(k=min;(k+0.5)<=max;k=k++){
		gh[k]=0;
		for(i=0;i<n;i++)
			if((k+0.5)>=sz[i][0]&&(k+0.5)<=sz[i][1])
				gh[k]=1;
	}
	for(k=min;(k+0.5)<=max;k=k++){
		if(gh[k]==0)
			o=1;
		if(gh[k]==1)
			r++;
	}
	if(r==max-min)
		printf("%d %d",min,max);
	if(o==1)
		printf("no");
	return 0;
}
