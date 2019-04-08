int main()
{
	int shu[100],shou[100],t[100]={0};
	int i,n,j,k,e;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&shou[i],&shu[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(((shou[i+j]>=90)&&(shou[i+j]<=140))&&((shu[i+j]>=60)&&(shu[i+j]<=90))){
				t[i]++;
			}
			else{
				break;
			}
		}
	}
				
	for(k=1;k<=n;k++){
		for(i=0;i<n-k;i++){
			if(t[i]>t[i+1]){
				e=t[i+1];
				t[i+1]=t[i];
				t[i]=e;
			}
		}
	}
	printf("%d",t[n-1]);

	

	return 0;
}
