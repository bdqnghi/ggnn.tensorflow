int main(){
	int n,a[1000],k,i,j,t;
	scanf("%d",&n);
	scanf("%d",&k);
	i=0;
	while(i<n){
		scanf("%d",&a[i]);
		i=i+1;
	}
	for(j=0;j<n-1;j=j+1){
                       for(i=j-1;i<n-1;i=i+1){
                                            if(a[i]+a[j]==k){
                                                            break;
                                            }
                       }
                       if(a[i]+a[j]==k){
                                       break;
                       }
    }
    if(a[i]+a[j]==k){
                 printf("yes");
    }
    else{
                 printf("no");
    }
	return 0;
}