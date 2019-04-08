int main(){
	int i,j,length;
	char a[200];
	char b[200];
	scanf("%s %s",a,b);
    if(strlen(a)!=strlen(b)) {
		printf("NO");
		return 0;
	}
	length=strlen(a);
    for(i=0;i<length;i++){
		for(j=0;j<length;j++){
			if(a[i]==b[j]){ 
				b[j]='\0';
				break;	
			}		
		}
		if(j==length){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}