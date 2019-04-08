int main() {
	char n[301],temp;
	int a[27]={0},b[27]={0},t=0,i,j,len;
	scanf("%s",&n);
	len=strlen(n);
	for(i=0;i<=len;i++) {
		if(n[i]>='A'&&n[i]<='Z') {
			for(j=1;j<=26;j++) {
				if(n[i]==j+64) {
					a[j]+=1;
					t=1;
				}
			}
		}
		if(n[i]>='a'&&n[i]<='z') {
			for(j=1;j<=26;j++) {
				if(n[i]==j+96) {
					b[j]+=1;
					t=1;
				}
			}
		}
	}
	if(t==1) {
		for(i=1;i<=26;i++) {
			if(a[i]!=0) {
				temp=i+64;
				printf("%c=%d\n",temp,a[i]);
			}
		}
		for(i=1;i<=26;i++) {
			if(b[i]!=0) {
				temp=i+96;
				printf("%c=%d\n",temp,b[i]);
			}
		}
	}
	else {
		printf("No");
	}
	return 0;
}
