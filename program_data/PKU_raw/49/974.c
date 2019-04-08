int main()
{
	char ch[500];
	gets(ch);
	int i,len,j,k;
	len=strlen(ch);
	for(i=2;i<=len-1;i++){
			int n;
			n=(i-2)/2;
		for(j=0;j<=len-i;j++){
			int h=0;
			int m=0;
			for(k=j;k<=j+n;k++){
				if(ch[k]==ch[j+i-1+m]){
					h++;
					m--;
				}else{
					break;
				}
				if(h==(i/2)){
					int l;
					for(l=j;l<=j+i-1;l++){
						printf("%c",ch[l]);
					}
					printf("\n");
				}
			}
		}
	}
	return 0;
}