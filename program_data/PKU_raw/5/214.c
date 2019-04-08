int main()
{
	int i,j,c[2],e=0;
	char a[2][501];
	double b;
	scanf("%lf",&b);
	for(i=0;i<2;i++){
		scanf("%s",a[i]);
	}
    c[0]=strlen(a[0]);
	c[1]=strlen(a[1]);
	if(c[0]!=c[1]){
		printf("error");
		return 0;
	}
	for(i=0;i<2;i++){
		for(j=0;j<c[i]-1;j++){
			if(a[i][j]!='A'&&a[i][j]!='T'&&a[i][j]!='G'&&a[i][j]!='C'){
				printf("error");
				return 0;
			}
		}
	}
	for(j=0;j<c[0];j++){
        if(a[0][j]==a[1][j]){
			e++;
		}
	}
	if(1.0*e/c[0]>b){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}