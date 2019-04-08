int main()
{
	int i,g=0,j,e,k,flag=1;
	double n,m;
	char s[2][502];
	scanf("%lf",&n);
	for(i=0;i<2;i++){
		scanf("%s",s[i]);
	}
	e=strlen(s[1]);
	k=strlen(s[0]);
	if(e!=k){
		flag=0;
	}
	if(flag==1){
		for(i=0;i<2;i++){
			for(j=0;s[i][j];j++){
				if((s[i][j]!='A')&&(s[i][j]!='G')&&(s[i][j]!='C')&&(s[i][j]!='T')){
					flag=0;
				}
			}
		}
	}
	for(j=0;s[0][j];j++){
		if(s[0][j]==s[1][j]){
			g++;
		}
	}
	m=1.0*g/e;
	if(flag==1){
		if(m>n){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}else{
		printf("error\n");
	}
	return 0;
}
	