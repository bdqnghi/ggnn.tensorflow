int main()
{
	int n,i,j,k,m,t,l;
	char a[100][1000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(a[i]);
	}
	for(i=0;i<n;i++){
		l=-1;
		t=strlen(a[i]);
		for(j=0;j<t;j++){
			m=1;
			for(k=0;k<t;k++){
				if(k!=j&&a[i][j]==a[i][k]){
					m=0;
				}
			}
			if(m==1){
				l+=1;
				printf("%c\n",a[i][j]);
				break;
			}	
		}
		if(l==-1){
			printf("no\n");
		}
	}
	return 0;
}