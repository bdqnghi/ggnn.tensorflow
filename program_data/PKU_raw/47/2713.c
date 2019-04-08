int main(){
	int n,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	                    }
	for(int t=n-1;t>=0;t--){
	   if(t>0)printf("%d ",a[t]);
	   else{printf("%d",a[t]);}
	                    }
	return 0;
}