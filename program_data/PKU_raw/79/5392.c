int main()
{
	int i,j,k,n,m,t;
	for(;;){
    scanf("%d",&n);
	scanf("%d",&m);
	if((n==0)&&(m==0))break;
	t=0;
	int nn[300]={0};
    for(i=1;i<n;i++){
		j=0;
		for(;;){
			if(t==n){
				for(k=0;k<n;k++){
					if(nn[k]==0){
				        t=k;
						break;
					}
				}
			}
			if(nn[t]==0)j=j+1;
			if(j==m){break;}
			t=t+1;
		}
		nn[t]=1;
	}
	for(i=0;i<n;i++){
		if(nn[i]==0)
			printf("%d\n",i+1);
	}
	}
	return 0; 
}