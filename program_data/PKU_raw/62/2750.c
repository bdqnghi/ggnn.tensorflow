int main(){
	char a[10000];
	gets(a);
	int i,k;
	for(i=0;a[i]!='\0';i++){
		if(a[i]==' '){
			while(1){
				if(a[i+1]==' '){
					for(k=i;a[k]!='\0';k++){
						a[k]=a[k+1];
					}
				}else{
					break;
				}
			}
		}
	}
	printf("%s",a);
	return 0;
}