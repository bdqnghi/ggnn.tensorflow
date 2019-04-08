int main(){
	int i,j,h,n,p;char c;
	char a[100][100];
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		scanf("%s",a[i]);
	}
	for (i=1;i<=n;i++){
		p=1; c=a[i][0];
		h=strlen(a[i]);
		if (c>='0'&&c<='9'){
			p=0; 
		}
		for (j=0;j<h;j++){
			c=a[i][j];
			if ((c>='0'&&c<='9')||(c>='A'&&c<='Z')||
				(c>='a'&&c<='z')||(c=='_')){
				continue;}
			else{ p=0; break;}
		}
		if (p==0){
			printf("no\n");}
		else{printf("yes\n");}
	}
	return 0;
}