int main(){
	char a[50],b[50];
	scanf("%s %s",a,b);
	int i,j,cnt=0;
	int n;
	n=strlen(a);
	for(i=0;b[i]!='\0';i++){
		for(j=0;j<n;j++){
			if(a[j]==b[i+j]){
				cnt++;
			}
		}
		if(cnt==n){
			printf("%d",i);
			break;
		}
		else cnt=0;
	}

return 0;
}