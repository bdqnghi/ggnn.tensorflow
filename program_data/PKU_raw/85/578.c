int main() {
	char a[100][20];
	int n,i,j;
	int len[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
		len[i]=strlen(a[i]);
	}
	int w;
	for(i=0;i<n;i++){
		w=0;
		for(j=0;j<len[i];j++){
			if(((a[i][j]>=48)&&(a[i][j]<=57))||((a[i][j]>=97)&&(a[i][j]<=122))||((a[i][j]>=65)&&(a[i][j]<=90))||(a[i][j]==95)){
				w++;
			}
		}
		if(w==len[i]){
			if(((a[i][0]>=48)&&(a[i][0]<=57))){
				printf("no\n");
			}else {
			    printf("yes\n");
			}
		}else {
			printf("no\n");
		}
	}
	return 0;
}


