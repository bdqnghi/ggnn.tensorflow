int main()
{
	int n,i,j;
	char zfcsz[N][256];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&(zfcsz[i]));
	}
	for(i=0;i<n;i++){
		for(j=0;zfcsz[i][j]!='\0';j++){
			if(zfcsz[i][j]=='A'){
				zfcsz[i][j]='T';
			}else if(zfcsz[i][j]=='T'){
				zfcsz[i][j]=zfcsz[i][j]+'A'-'T';
			}else if(zfcsz[i][j]=='C'){
				zfcsz[i][j]=zfcsz[i][j]+'G'-'C';
			}else if(zfcsz[i][j]=='G'){
				zfcsz[i][j]=zfcsz[i][j]+'C'-'G';
			}
		}
}
	for(i=0;i<n;i++){
		printf("%s\n",zfcsz[i]);
	}
	return 0;
}