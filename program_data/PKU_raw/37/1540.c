int main(){
	int t,i,j,k,n,m=0;
	char str[101][100001];
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%s",str[i]);
		m=0;

		for(j=0;j<strlen(str[i]);j++){
			n=0;
			for(k=0;k<strlen(str[i]);k++){
				if(str[i][j]==str[i][k]&&j!=k)
					break;
				if(str[i][j]!=str[i][k])
					n++;
			}
			if(n==strlen(str[i])-1){
				printf("%c\n",str[i][j]);
				break;
			}else
				m++;
		}
		if(m==strlen(str[i]))
			printf("no\n");
	}

	return 0;
}