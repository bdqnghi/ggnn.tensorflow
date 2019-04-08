int main(){
    int n,i,j;
    char sz[21];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(sz);
		if((sz[0]=='_')||(sz[0]>='a'&&sz[0]<='z')||(sz[0]>='A'&&sz[0]<='Z')){
			for(j=1;sz[j]=='_'||(sz[j]>='a'&&sz[j]<='z')||(sz[j]>='A'&&sz[j]<='Z')||(sz[j]>='0'&&sz[j]<='9');j++){
				j=j;
			}
			if(sz[j]=='\0'){
				printf("yes\n");
			}
			else{
				printf("no\n");
			}
		}
		else{
			printf("no\n");
		}
	}
	return 0;
}