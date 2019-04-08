int main(){
	int n[26]={0};
	char z[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char nn[26][100][20];
	int m,i,j,r;
	char a[100][100];
	scanf("%d",&m);
	for(j=0;j<m;j++){
		scanf("%s",a[j]);
		char b[20];
		scanf("%s",b);
		int w=strlen(b);
		for(i=0;i<w;i++){
			for(r=0;r<26;r++){
				if(b[i]==z[r]){
					n[r]++;
					strcpy(nn[r][n[r]],a[j]);
				}
			}
		}
	}
		int c=0;
		for(r=1;r<26;r++){
			if(n[r]>n[c])
				c=r;
		}
		printf("%c\n%d\n",z[c],n[c]);
		for(i=1;i<=n[c];i++){
			printf("%s\n",nn[c][i]);
		}
	}
