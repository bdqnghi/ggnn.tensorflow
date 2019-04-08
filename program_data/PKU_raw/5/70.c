int main(){
	double n,s=0,m;
	scanf("%lf",&n);
	char a[600],b[600];
	scanf("%s%s",&a,&b);
	int l1,l2;
	l1=strlen(a);
	l2=strlen(b);
	if(l1!=l2){
		printf("error");
	}
	if(l1==l2){
		int i,T=0;
		for(i=0;a[i]!='\0'&&b[i]!='\0';i++){
			if((a[i]=='A'||a[i]=='T'||a[i]=='G'||a[i]=='C')&&(b[i]=='G'||b[i]=='T'||b[i]=='A'||b[i]=='C')){
			if(a[i]==b[i]){
					s++;
				}	
			}
			else {
				printf("error");
				T=1;
				break;
				
			}
		}
		if(T==0){
		m=s/l1;
		if(m>n){
			printf("yes");
		}
		if(m<=n){
			printf("no");
		}
		}
	}
	return 0;
}