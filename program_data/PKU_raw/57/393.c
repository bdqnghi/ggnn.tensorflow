int main(){
	int n,i,j,m;
	char a[51];
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		gets(a);
		m=strlen(a);
		if(a[m-1]=='r'||a[m-1]=='y'){
			a[m-2]=0;
                            puts(a);
			}
		if(a[m-1]=='g'){
                   a[m-3]=0;
                   puts(a);
		}
	}
	return 0;
}


