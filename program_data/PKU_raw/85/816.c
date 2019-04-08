int main(){
	int N,i,k,flag;
	char a[100];
	scanf("%d\n",&N);
	for(i=0;i<N;i++){
		gets(a);
		flag=1;
		if((a[0]=='_')||((a[0]>='A')&&(a[0]<='Z'))||((a[0]>='a')&&(a[0]<='z'))){
				for(k=1;k<strlen(a);k++){
					if((a[k]<'0')||((a[k]>'9')&&(a[k]<'A'))||((a[k]>'Z')&&(a[k]<'_'))||((a[k]>'_')&&(a[k]<'a'))||(a[k]>'z')){
						flag=0;
						break;
					}
				}
			}
		else flag=0;
		if(flag==0) printf("no\n");
		if(flag==1) printf("yes\n");
	}
	return 0;
}
