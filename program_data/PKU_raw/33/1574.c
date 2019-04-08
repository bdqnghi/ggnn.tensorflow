int main()
{
	int n;
	char lian[1000][260];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%s", lian[i]);
		int m=0;
		while(lian[i][m]!='\0'){
			if(lian[i][m]=='A'){
				lian[i][m]='T';
			}
			else if(lian[i][m]=='T'){
				lian[i][m]='A';
			}
			else if(lian[i][m]=='G'){
				lian[i][m]='C';
			}
			else if(lian[i][m]=='C'){
				lian[i][m]='G';
			}
			m++;
		}
		printf("%s\n", lian[i]);
	}
	return 0;
}