int main(){
 char str[100][22];
 int len,n,m;
    scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",&str[i]);
		len=strlen(str[i]);
		m=0;
		if(((str[i][0]>='A')&&(str[i][0]<='Z'))||((str[i][0]>='a')&&(str[i][0]<='z'))||(str[i][0]==95)){
		for (int j=1;j<len;j++)
		{
			if((('A'<=str[i][j])&&(str[i][j]<='Z'))||(('a'<=str[i][j])&&(str[i][j]<='z'))||(str[i][j]==95)||((48<=str[i][j])&&(str[i][j]<=57))){
		    continue;
			}else{
				printf("no\n");
                m=1;
				break;
			}
		}
		if(m==0){
			printf("yes\n");}
		}else{
			printf("no\n");
		}
	}
	return 0;
}