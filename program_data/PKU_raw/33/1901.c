char a[10000][255];
int main(int argc, char* argv[])
{   int n;
    scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
        scanf("%s",a[i]);
		int l=0;
		l=strlen(a[i]);
		for(j=0;j<l;j++){
			if(a[i][j]=='A')
				a[i][j]='T';
			else if(a[i][j]=='T')
				a[i][j]='A';
			else if(a[i][j]=='G')
				a[i][j]='C';
			else if(a[i][j]=='C')
				a[i][j]='G';
		}
	printf("%s\n",a[i]);
	}
	return 0;
}

