int main(){
	int n,i,j;
	char str[100][21];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",str[i]);
	for(i=0;i<n;i++)
		if(str[i][0]<'A'
			||(str[i][0]>'Z'&&str[i][0]<'a'&&str[i][0]!='_')
			||str[i][0]>'z')
				printf("no\n");
		else
			for(j=0;j<strlen(str[i]);j++)
				if(str[i][j]<'0'
					||(str[i][j]>'9'&&str[i][j]<'A')
					||(str[i][j]>'Z'&&str[i][j]<'a'&&str[i][j]!='_')
					||str[i][j]>'z'
					){
						printf("no\n");
						break;
				}
				else if(j==strlen(str[i])-1)
					printf("yes\n");
	return 0;
}
