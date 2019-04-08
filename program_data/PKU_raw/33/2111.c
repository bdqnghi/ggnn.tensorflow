int main()
{
	int n,i,j;
	char word[10000][256];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s\n",word[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<256;j++){
			if(word[i][j]=='A'){
				word[i][j]='T';
				continue;
			}
			else if(word[i][j]=='T'){
                word[i][j]='A';
                continue;
			
			}
            else if(word[i][j]=='G'){
                word[i][j]='C';
                continue;
			
			}
            else if(word[i][j]=='C'){
                word[i][j]='G';
                continue;
				
			}
		}
			}
for(i=0;i<n;i++)
{
printf("%s\n",word[i]);
}
	

	return 0;
}




