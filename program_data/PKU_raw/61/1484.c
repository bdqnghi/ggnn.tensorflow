int main(){
	int a[5000],b[1000];
	int i,n,k;
	scanf("%d",&k);
	a[0]=1;
	a[1]=1;
	for(i=0;i<1000;i++){
		a[i+2]=a[i+1]+a[i];
	}
	for(i=0;i<k;i++){
	    scanf("%d",&b[i]);
	}
	 for(i=0;i<k-1;i++){
	     printf("%d\n",a[b[i]-1]);
	}
	 printf("%d",a[b[k-1]-1]);
	return 0;
}
