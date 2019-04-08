
main(){
	char a[21];
	long i, n, l, j, m;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		m=0;
		scanf("%s", a);
		l=strlen(a);
		if((a[0]!='_' && (a[0]-65)*(a[0]-90)*(a[0]-97)*(a[0]-122)>0) || a[0]<47){
			printf("no\n");
			m++;
		}
		else{
			for(j=1; j<l; j++){
				if((a[j]!='_' && (a[j]-48)*(a[j]-57)*(a[j]-65)*(a[j]-90)*(a[j]-97)*(a[j]-122)>0) || a[j]<47){
					printf("no\n");
					m++;
				}
				else;
				if(m>0) break;
				else;
			}
		}
		if(m>0) continue;
		else printf("yes\n");
	}
}
