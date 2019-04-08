int main(){
	int xl[1000]={0};
	int n=0,k=0;
	scanf("%d",&n);
	scanf("%d",&k);
	int i=0,j=0;
	int a=0;
	for(i=0;i<n;i++){
	   scanf("%d",&xl[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=1;j<n;j++){
			if(xl[i]+xl[j]==k){
			   printf("%c%c%c",'y','e','s');
               a=1;
			   break;
			}
		}
		if(a==1){
		   break;
		}
	}
	if(a==0){
	   printf("%c%c",'n','o');
	}
    return 0;
}