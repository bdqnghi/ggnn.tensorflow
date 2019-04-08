int main (){
	int n,i,j,k,b;
	scanf("%d",&n);
	char a[100000];
	
	for (i=0;i<n;i++){
		scanf("%s",&a);
		for(j=0;a[j]!='\0';j++){
			b=1;
			for(k=0;a[k]!='\0';k++){
				if(j==k){
					continue;
				}else{
				    if(a[j]-a[k]==0){
					    b=0;
					    break;
					}
				}
			}
			if(b==1){
			    printf("%c\n",a[j]);
			    break;
			}
		}
		if(b==0){
			printf("no\n");
		}
	}
	
	return 0;
}
