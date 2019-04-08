int main(){
	char a[10000];
	char b[10000];
	int i,j;
	char c;
	scanf("%s %s",&a,&b);
	if(strlen(a)!=strlen(b)) printf("NO");
	else{
		for(i=0;i<strlen(a);i++){
			for(j=i;j<strlen(a);j++){
				if(a[i]>a[j]){
					c=a[i];
					a[i]=a[j];
					a[j]=c;
				}
			}
		}
		for(i=0;i<strlen(b);i++){
			for(j=i;j<strlen(b);j++){
				if(b[i]>b[j]){
					c=b[i];
					b[i]=b[j];
					b[j]=c;
				}
			}
		}
		if(strcmp(a,b)==0) printf("YES");
		else printf("NO");
	}
	return 0;
}