int main()
{
	char a[N],b[N][N];
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a);
		k=strlen(a);
		for(j=0;j<k;j++){
			if(a[j]=='A'){
				a[j]='T';
			}
			else if(a[j]=='T'){
				a[j]='A';
			}
			else if(a[j]=='C'){
				a[j]='G';
			}
			else if(a[j]=='G'){
				a[j]='C';
			}
		}
		strcpy(b[i],a);
	}
	for(i=0;i<n;i++){
		printf("%s\n",b[i]);
	}
	return 0;
}