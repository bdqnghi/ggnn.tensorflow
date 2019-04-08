int main(){
	int n,i,k,sz[20];
	scanf("%d",&n);
	char a[20][20];
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++){
		for(k=1;a[i][k]!='\0';k++){
			if(((a[i][0]<91)&&(a[i][0]>64))||((a[i][0]<123)&&(a[i][0]>96))||(a[i][0]=='_')){
		    	if(((a[i][k]<='9')&&(a[i][k]>='0'))||((a[i][k]<='z')&&(a[i][k]>='a'))||((a[i][k]<='Z')&&(a[i][k]>='A'))||(a[i][k]=='_')){
				   sz[i]=1;
				}else{
				   sz[i]=0;
				   break;
				}
			}else{
				sz[i]=0;
				break;
			}
		}
	}
	for(i=0;i<n;i++){
		if(sz[i]==0){
			printf("no\n");
		}else{
			printf("yes\n");
		}
	}
	return 0;
}
