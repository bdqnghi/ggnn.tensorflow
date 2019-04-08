int main()
{
	int n,i,j;
	scanf("%d",&n);
	char zf[1000][300];
	for(i=0;i<n;i++){
	    scanf("%s",zf[i]);
        for(j=0;j<300;j++){
			if((zf[i][j])=='A'){
				zf[i][j]='T';
			}else if((zf[i][j])=='T'){
				zf[i][j]='A';
			}else if((zf[i][j])=='G'){
				zf[i][j]='C';
			}else if((zf[i][j])=='C'){
				zf[i][j]='G';
			}else if((zf[i][j])=='\0'){
				break;
			}
		}
            printf("%s\n",zf[i]);
	}
	return 0;
}
