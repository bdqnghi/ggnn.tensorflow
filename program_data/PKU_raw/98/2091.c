int main(){
	int i,n,len;
	int sum=0;
	char dw[1000][41];
	scanf("%d",&n);
    for(i=0;i<n;i++){
		scanf("%s",dw[i]);
		len=strlen(dw[i]);
	
		if(sum+len+1>80){
			printf("\n");
			sum=0;
		}else{
			if(i>0){
			   printf(" ");
			   sum++;
			}
		}
		printf("%s",dw[i]);	
		sum+=len;
	}
	return 0;
}