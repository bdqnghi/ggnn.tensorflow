int main(){
    int a[10000],b[10000],c[10000]={0};
	int min=10000,max=0,i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
	    if(min>a[i]){
		    min=a[i];
		}
		if(max<b[i]){
		    max=b[i];
		}
	}
         c[min]=1;
	for(i=min+1;i<=max;i++){
	     for(j=0;j<n;j++){
		     if(a[j]<=(i-0.5)&&i<=b[j]){
			      c[i]=1;
			 }
		 }
	}
	for(i=min;i<=max;i++){
	    if(c[i]==0){
		    printf("no");
                       break;
		}else if(i==max){
		    printf("%d %d",min,max);
		}
	}
	return 0;
}
