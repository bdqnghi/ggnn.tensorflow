int main(){
	int n,input[501],i,p,ex;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&input[i]);
		if(input[i]%2==0){i--;n--;}}
	for(i=0;i<n;i++){
		for(p=0;p<n-1;p++){
			if(input[p]>input[p+1]){
				ex=input[p];
				input[p]=input[p+1];
				input[p+1]=ex;}}}
	printf("%d",input[0]);
	for(i=1;i<n;i++){printf(",%d",input[i]);}

	

	
return 0;
}


 