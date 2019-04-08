int main(){
	int a[50000],b[50000],c[50000],i,n,j,min,max,k;
	min=10000;max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d",&a[i],&b[i]);
    for(i=0;i<n;i++)
	{
       if(min>=a[i])
		   min=a[i];
	   if(max<=b[i])
		   max=b[i];
	}
    
	for(i=min;i<=max;i++){
		c[i]=1;
	}
	for(i=0;i<n;i++){
		for(j=min;j<=max;j++){
			if(j>=a[i]&&j<b[i]){
				c[j]=0;
			}
		}
	}
	c[max]=0;
	k=1;
	for(i=min;i<=max;i++){
		if(c[i]==1){
			k=0;
			break;}
	}
	if(k==0){
		printf("no");
	}else{
		printf("%d %d",min,max);
	}
	return 0;
}